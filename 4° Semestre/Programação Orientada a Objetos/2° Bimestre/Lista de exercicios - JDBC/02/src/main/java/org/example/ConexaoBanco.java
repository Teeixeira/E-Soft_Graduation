package org.example;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class ConexaoBanco {

    public static Connection getConnection(){
        String local = "jdbc:h2:./banco_test";
        String user = "02";
        String senha = "";

        Connection conexao = null;

        try{
            conexao = DriverManager.getConnection(local,user,senha);
        } catch (SQLException e){
            System.out.println("Erro ao conectar no banco de dados");
        }

        return conexao;
    }
}
