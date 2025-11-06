package org.example;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class ConexaoBanco {

        public static Connection getConection(){

            String local = "jdbc:h2:./banco_test";
            String usuario = "user";
            String password = "";

            Connection conexao = null;

            try{
                conexao = DriverManager.getConnection(local,usuario,password);
            } catch (SQLException e) {
                System.out.printf("Erro ao se conectar com o banco!");
            }

            return conexao;
        }
}
