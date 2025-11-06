package org.example;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class ConexaoBanco {

    public static Connection getConnection(){
        String local = "jdbc:h2:./banco_test";
        String usuario = "01";
        String senha = "";

        Connection conexao = null;

        try{
            conexao = DriverManager.getConnection(local, usuario, senha);
        } catch (SQLException erro){
            System.out.println("Erro ao se conetar com o banco de dados!");
        }

        return conexao;
    }
}
