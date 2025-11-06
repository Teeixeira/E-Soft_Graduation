package org.example;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.println("Digite seu nome: ");
        String nome = input.nextLine();

        String sqlInsert = ("INSERT INTO autor (input) VALUES (?);");

        try(
                Connection conexao = ConexaoBanco.getConection();
                PreparedStatement smtp = conexao.prepareStatement(sqlInsert);
        ){
            int linhasIncluidas = smtp.executeUpdate();
            System.out.printf("Linhas incluidas: %d\n", linhasIncluidas);

        } catch (SQLException erro){
            System.out.println("Erro ao inserir no banco de dados");
        }
    }
}