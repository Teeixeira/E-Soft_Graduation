package org.example;

import java.sql.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner leitor = new Scanner(System.in);

        String sqlInsert = "CREATE TABLE IF NOT EXISTS produto (" +
                "id INT AUTO_INCREMENT PRIMARY KEY," +
                "nome VARCHAR(255) NOT NULL," +
                "preco DOUBLE," +
                "quantidade INT" +
                ");";

        try (
                Connection conexao = ConexaoBanco.getConnection();
                PreparedStatement veiculo =conexao.prepareStatement(sqlInsert);
        ) {
            int linhas = veiculo.executeUpdate();
        } catch (SQLException e){
            System.out.println("Erro para criar a tabela");
        }

        do{
            System.out.println("Escolha a operação:");
            System.out.println("1 - Incluir produto");
            System.out.println("2 - Listar produtos");
            System.out.println("3 - Atualiza preco do produto");
            System.out.println("4 - Deletar produto");
            System.out.println("5 - Sair");
            int operacao = leitor.nextInt();
            leitor.nextLine();

            if(operacao == 1){
                System.out.println("Nome do produto:");
                String nome = leitor.nextLine();

                System.out.println("Preço unitario:");
                double preco = leitor.nextDouble();

                System.out.println("Quantidade:");
                int quantidade = leitor.nextInt();

                String produtoInsert = "INSERT INTO produto (nome, preco, quantidade) VALUES (?, ?, ?)";
                try (
                        Connection conexao = ConexaoBanco.getConnection();
                        PreparedStatement veiculo = conexao.prepareStatement(produtoInsert);
                ) {
                    veiculo.setString(1, nome);
                    veiculo.setDouble(2, preco);
                    veiculo.setInt(3, quantidade);
                    int linhas = veiculo.executeUpdate();
                    System.out.println(linhas + " linhas incluídas!");

                } catch (SQLException e){
                    System.out.println("Erro para inserir o produto");
                }
            }

            if(operacao == 2){
                String selectListar =  "SELECT * FROM produto";
                try (
                        Connection conexao = ConexaoBanco.getConnection();
                        PreparedStatement veiculo = conexao.prepareStatement(selectListar);
                ) {
                    ResultSet linhas = veiculo.executeQuery(); // verificar se não está errado

                    System.out.println("--- LISTA DE PRODUTOS ---");
                    boolean encontrou = false;
                    while(linhas.next()) {
                        encontrou = true;
                        System.out.printf("ID: %d | Nome: %s | Preço: R$ %.2f | Qtd: %d\n",
                                linhas.getInt("id"),
                                linhas.getString("nome"),
                                linhas.getDouble("preco"),
                                linhas.getInt("quantidade"));
                    }
                    if (!encontrou) {
                        System.out.println("Nenhum produto cadastrado.");
                    }
                    System.out.println("-------------------------");
                } catch (SQLException e){
                    System.out.println("Erro para realizar a consulta do produto");
                }
            }

            if(operacao == 3){
                String atualizaProduto = "UPDATE produto SET preco = ? WHERE id = ?";
                System.out.println("ID do produto:");
                int id = leitor.nextInt();
                leitor.nextLine();
                System.out.println("Novo preço:");
                double novoPreco = leitor.nextDouble();
                leitor.nextLine();

                try (
                        Connection conexao = ConexaoBanco.getConnection();
                        PreparedStatement veiculo = conexao.prepareStatement(atualizaProduto);
                ) {
                    veiculo.setDouble(1, novoPreco);
                    veiculo.setInt(2, id);
                    int linhas = veiculo.executeUpdate();
                    System.out.println(linhas + " linhas atualizadas!");

                } catch (SQLException e){
                    System.out.println("Erro ao atualizar o produto");
                }
            }

            if(operacao == 4){

                System.out.println("ID do produto a deletar:");
                int id = leitor.nextInt();
                leitor.nextLine();

                String deleteProduto = "DELETE FROM produto WHERE id = ?";

                try (
                        Connection conexao = ConexaoBanco.getConnection();
                        PreparedStatement veiculo = conexao.prepareStatement(deleteProduto);
                ) {
                    veiculo.setInt(1, id);
                    int linhas = veiculo.executeUpdate();
                    System.out.println(linhas + " linhas deletadas!");

                } catch (SQLException e){
                    System.out.println("Erro ao atualizar o produto");
                }
            }

            if(operacao == 5){
                System.out.println("Programa finalizado!");
                break;
            }
        } while(true);

        leitor.close();
    }
}