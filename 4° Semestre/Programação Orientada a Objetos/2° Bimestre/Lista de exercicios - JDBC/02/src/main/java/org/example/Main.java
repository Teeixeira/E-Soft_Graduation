package org.example;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner leitor = new Scanner(System.in);

        List<Cliente> clientes = new ArrayList<Cliente>();

        OperacoesBanco query = new OperacoesBanco();

        query.criarTabela();

        do{
            int operacao;
            int proximoID = 1;

            System.out.println("\n===== Menu Clientes =====");
            System.out.println("1 - Cadastrar Cliente");
            System.out.println("2 - Listar Clientes");
            System.out.println("3 - Buscar por e-mail");
            System.out.println("4 - Atualizar telefone");
            System.out.println("5 - Remover Cliente");
            System.out.println("6 - Sair");
            System.out.print("Escolha uma operação: ");
            operacao = leitor.nextInt();
            leitor.nextLine();

            if(operacao == 1){
                System.out.println("===== Cadastrar Cliente =====");
                System.out.println("Digite o nome do Cliente: ");
                String nome = leitor.nextLine();

                leitor.nextLine();
                System.out.println("Digite o e-mail do Cliente: ");
                String email = leitor.nextLine();

                leitor.nextLine();
                System.out.println("Digite o telefone do Cliente: ");
                String telefone = leitor.nextLine();

                Cliente novocliente = new Cliente(proximoID, nome, email, telefone);
                clientes.add(novocliente);

                proximoID++;
            }

            if(operacao == 2){
                System.out.println("===== Listar Clientes  =====");
                for(Cliente cliente : clientes){
                    System.out.printf("ID: %d | Nome: %s | E-mail: %s | Telefone: %s\n",
                            cliente.getId(), cliente.getNome(), cliente.getEmail());
                }
            }

            if(operacao == 3){
                System.out.println("===== Buscar por e-mail =====");
                System.out.println("E-mail do cliente:");
                String email = leitor.nextLine();
                leitor.nextLine();

                for(Cliente c : clientes){
                    if(c.getEmail() == email){
                        System.out.println("Cliente encontrado!");
                        System.out.printf("ID: %d | Nome: %s | E-mail: %s | Telefone: %s\n",
                                c.getId(), c.getNome(), c.getEmail(), c.getTelefone());
                    } else {
                        System.out.println("Cliente nao encontrado!");
                    }
                }
            }

            if(operacao == 4){
                System.out.println("===== Atualizar Telefone =====");
                System.out.println("Digite o ID do cliente: ");
                int id = leitor.nextInt();
                leitor.nextLine();

                for(Cliente c : clientes){
                    if(c.getId() == id){
                        System.out.println("Novo Telefone:");
                        String novoTelefone = leitor.nextLine();
                        leitor.nextLine();

                        c.setTelefone(novoTelefone);
                    }
                }
            }

            if(operacao == 5){
                System.out.println("===== Remover Cliente =====");
                System.out.println("Digite o ID do cliente: ");
                int id = leitor.nextInt();
                leitor.nextLine();
                for(Cliente c : clientes){
                    if(c.getId() == id){
                        clientes.remove(c);
                        System.out.println("Cliente removido!");
                    }
                }
            }

            if(operacao == 6){
                System.out.println("===== Sair =====");
                break;
            }
        } while (true);

    }
}