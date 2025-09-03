package br.edu.unicesumar.api.controllers;

import br.edu.unicesumar.api.entities.Livro;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

import java.util.ArrayList;
import java.util.List;

@RestController

public class IndexController {

    private List<Livro> livros = new ArrayList<>();

    @GetMapping("/")
    public List<Livro> getLivros() {
        return this.livros;
    }

    @PostMapping("/")
    public Livro criarLivro(@RequestBody Livro livro) {
        this.livros.add(livro);

        return livro;
    }
}