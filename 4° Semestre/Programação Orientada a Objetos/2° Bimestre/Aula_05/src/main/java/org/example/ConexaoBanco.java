package org.example;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class ConexaoBanco {

    public static Connection getConection(){

        String local = "jdbc:h2:./banco_test";
        String usuario = "teste";
        String senha = "";

        Connection conexao = null;

        try{
            conexao = DriverManager.getConnection(local,usuario,senha);
        }catch(SQLException e){
            System.out.println("Erro ao conectar no banco de dados");
        }
        
        return conexao;
    }
}
