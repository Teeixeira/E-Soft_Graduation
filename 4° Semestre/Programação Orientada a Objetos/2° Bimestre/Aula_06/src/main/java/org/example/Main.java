package org.example;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        //CASO DE USO 1 (For não segura):
        String sql = "CREATE TABLE IF NOT EXISTS autor (" +
                "id INT AUTO_INCREMENT PRIMARY KEY," +
                "nome VARCHAR(255) NOT NULL" +
                ");";

        try (
                Connection conexao = ConexaoBanco.getConection();
                Statement veiculo = conexao.createStatement();
        ) {
            veiculo.execute(sql);
            System.out.println("TABELA CRIADA COM SUCESSO");

            veiculo.executeUpdate("INSERT INTO autor (nome) VALUES ('Autor Teste')");
            System.out.printf("Insert realizado com sucesso!\n");

            veiculo.executeQuery("SELECT * FROM autor;");
            System.out.printf("Consulta realizada com sucesso!\n");

            conexao.createStatement();
        } catch (SQLException erro){

        }

        // CASO DE USO 2 (Forma Segura):
        Scanner leitor = new Scanner(System.in);
        System.out.println("Digite um nome:");
        String nomeDigitado = leitor.nextLine();

        String sqlInsert = "INSERT INTO autor (nome) VALUES (?);";

        try (
                Connection conexao = ConexaoBanco.getConection();
                PreparedStatement veiculo = conexao.prepareStatement(sqlInsert);
        ) {
           veiculo.setString(1, nomeDigitado);

           int linhasIncluidas = veiculo.executeUpdate();
            System.out.println(linhasIncluidas + " linhas incluídas!");

        } catch (SQLException erro2){
            System.out.println("Erro para realizar o insert");
        }

        // conexao.close();
    }
}