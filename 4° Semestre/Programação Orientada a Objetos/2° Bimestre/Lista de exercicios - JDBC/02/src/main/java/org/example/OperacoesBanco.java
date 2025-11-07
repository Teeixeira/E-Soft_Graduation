package org.example;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class OperacoesBanco {

    public void criarTabela(){

        String sqlCreate = "CREATE TABLE IF NOT EXISTS cliente (" +
                "id INT AUTO_INCREMENT PRIMARY KEY," +
                "nome VARCHAR(255) NOT NULL," +
                "email VARCHAR(255) UNIQUE," +
                "telefone VARCHAR(20)" +
                ");";

        try(
                Connection conexao = ConexaoBanco.getConnection();
                PreparedStatement veiculo = conexao.prepareStatement(sqlCreate);
                ){
            int linhas = veiculo.executeUpdate();
        } catch (SQLException erro){
            System.out.println("Erro ao criar Tabela de Cliente");
        }
    }

    public void criarCliente(String nome, String email, String telefone){

        String sqlCreate = "INSERT INTO cliente (nome, email, telefone) VALUES (?, ?, ?)";

        try(
                Connection conexao = ConexaoBanco.getConnection();
                PreparedStatement veiculo = conexao.prepareStatement(sqlCreate);
        ){
            veiculo.setString(1, nome);
            veiculo.setString(2, email);
            veiculo.setString(3, telefone);
            int linhas = veiculo.executeUpdate();
            System.out.println(linhas + " linhas criada com sucesso");
        } catch (SQLException erro){
            System.out.println("Erro ao criar Tabela de Cliente");
        }
    }

    public void removerCliente(int id){

        String sqlDelete = "DELETE FROM cliente WHERE id = ?";

        try(
                Connection conexao = ConexaoBanco.getConnection();
                PreparedStatement veiculo = conexao.prepareStatement(sqlDelete);
        ){
            veiculo.setInt(1, id);
            int linhas = veiculo.executeUpdate();
        } catch (SQLException erro){
            System.out.println("Erro ao criar Tabela de Cliente");
        }
    }

    public void atualizarTelefone(int id, String telefone){
        String sqlUpdate = "UPDATE cliente SET telefone = ? WHERE id = ?";

        try(
                Connection conexao = ConexaoBanco.getConnection();
                PreparedStatement veiculo = conexao.prepareStatement(sqlUpdate);
        ){
            veiculo.setString(1, telefone);
            veiculo.setInt(2, id);
            int linhas = veiculo.executeUpdate();
        } catch (SQLException erro){
            System.out.println("Erro ao criar Tabela de Cliente");
        }
    }

    public void bucarPorEmail(String email){
        String sqlSelect = "SELECT * FROM cliente WHERE email = ?";

        try(
                Connection conexao = ConexaoBanco.getConnection();
                PreparedStatement veiculo = conexao.prepareStatement(sqlSelect);
        ){

            veiculo.setString(1, email);

            try(ResultSet resultado = veiculo.executeQuery()){
                boolean encontrou = false;

                while(resultado.next()){
                    encontrou = true;
                    System.out.printf("Cliente: %s | E-mail: %s | Telefone: %s\n",
                            resultado.getString("nome"),
                            resultado.getString("email"),
                            resultado.getString("telefone"));
                    }
                if (!encontrou) {
                    System.out.println("Cliente não encontrado");
                }
            }

            System.out.println("--------------------------");
        } catch (SQLException erro){
            System.out.println("Erro ao realizar a consulta do cliente");
        }
    }
}