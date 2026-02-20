package com.trx.employer.models;

import jakarta.persistence.*;

@Entity // Cria entidade no banco
@Table(name = "TBL_PESSOA") // Personaliza nome da tabela no banco
public class PessoaModel {

    @Id // Cria chave primaria no banco
    @GeneratedValue(strategy = GenerationType.IDENTITY)  // Gera ID automaticamente
    private Long id;
    private String nome;
    private String email;
    private Integer nascimento;

    public PessoaModel() {

    }

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public Integer getNascimento() {
        return nascimento;
    }

    public void setNascimento(Integer nascimento) {
        this.nascimento = nascimento;
    }
}
