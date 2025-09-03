package br.edu.unicesumar.bookstore.controllers;

import br.edu.unicesumar.bookstore.entities.Livro;
import br.edu.unicesumar.bookstore.services.LivroService;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("/livro")

public class LivroController {

    private final LivroService livroService;

    public LivroController(LivroService service) {
        this.livroService = service;
    }

    @GetMapping
    public List<Livro> findAll(){
        return this.livroService.findAll();
    }

    @GetMapping("/{id}")
    public ResponseEntity<Livro> findById(@PathVariable Long id){
        return this.livroService.findById(id)
                .map(ResponseEntity::ok)
                .orElse(ResponseEntity.notFound().build());
    }

    @PostMapping
    public ResponseEntity<Livro> create(@RequestBody Livro livro){
        this.livroService.create(livro);

        return ResponseEntity.status(201).body(livro);
    }

    @PutMapping("/{id}")
    public ResponseEntity<Livro> update(@PathVariable Long id, @RequestBody Livro novoLivro){
        return this.livroService.update(id, novoLivro)
                .map(ResponseEntity::ok)
                .orElse(ResponseEntity.notFound().build());
    }

    @DeleteMapping("/{id}")
    public ResponseEntity<Void> delete(@PathVariable Long id){
        if(this.livroService.delete(id)){
            return ResponseEntity.noContent().build();
        }

        return ResponseEntity.notFound().build();
    }
}

// http://localhost:8080
// GET     /livro
// GET     /livro/{id}
// POST    /livro
// PUT     /livro/{id}
// DELETE  /livro/{id}
