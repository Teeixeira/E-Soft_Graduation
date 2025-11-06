package org.example;

import java.sql.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner leitor = new Scanner(System.in);
        System.out.println("Digite um nome:");
        String nomeDigitado = leitor.nextLine();

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
            veiculo.setString(1, nomeDigitado);
            int linhas = veiculo.executeUpdate();
        } catch (SQLException e){
            System.out.println("Erro para criar a tabela");
        }

        System.out.println("Nome do produto:");
        String nome = leitor.nextLine();
        System.out.println("Precço unitario:");
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

        String selectListar =  "SELECT * FROM produto";
        try (
                Connection conexao = ConexaoBanco.getConnection();
                PreparedStatement veiculo = conexao.prepareStatement(produtoInsert);
        ) {
            veiculo.setString(1, selectListar);
            ResultSet linhas = veiculo.executeQuery(); // verificar se não está errado
        } catch (SQLException e){
            System.out.println("Erro para realizar a consulta do produto");
        }

        String atualizaProduto = "UPDATE produto SET preco = ? WHERE id = ?";
        System.out.println("ID do produto:");
        int id = leitor.nextInt();
        System.out.println("Novo preço:");
        preco = leitor.nextDouble();

        try (
                Connection conexao = ConexaoBanco.getConnection();
                PreparedStatement veiculo = conexao.prepareStatement(atualizaProduto);
        ) {
            veiculo.setInt(1, id);
            veiculo.setDouble(2, preco);
            int linhas = veiculo.executeUpdate();
            System.out.println(linhas + " linhas atualizadas!");

        } catch (SQLException e){
            System.out.println("Erro ao atualizar o produto");
        }

        String deleteProduto = "DELETE FROM produto WHERE id = ?";

        try (
                Connection conexao = ConexaoBanco.getConnection();
                PreparedStatement veiculo = conexao.prepareStatement(deleteProduto);
        ) {
            veiculo.setString(1, deleteProduto);
            int linhas = veiculo.executeUpdate();
            System.out.println(linhas + " linhas deletadas!");

        } catch (SQLException e){
            System.out.println("Erro ao atualizar o produto");
        }
    }
}