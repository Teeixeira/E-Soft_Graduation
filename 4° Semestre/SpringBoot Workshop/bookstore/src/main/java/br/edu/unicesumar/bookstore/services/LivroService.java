package br.edu.unicesumar.bookstore.services;

import br.edu.unicesumar.bookstore.entities.Livro;
import br.edu.unicesumar.bookstore.repositories.LivroRepository;
import org.springframework.stereotype.Service;

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;
import java.util.concurrent.atomic.AtomicLong;

@Service

public class LivroService {

    // private final List<Livro> livros = new ArrayList<>();
    // private final AtomicLong idCounter = new AtomicLong(1);

    private LivroRepository livroRepository;

    public LivroService(LivroRepository repository) {
        this.livroRepository = repository;
    }

    public List<Livro> findAll(){
        return this.livroRepository.findAll();
    }

    public Livro create(Livro livro){
        return this.livroRepository.save(livro);
    }

    public Optional<Livro> findById(Long id){
        return this.livroRepository.findById(id);
    }

    public Optional<Livro> update(Long id, Livro novoLivro){
        return this.livroRepository.findById(id).map(livro -> {
                livro.setTitulo(novoLivro.getTitulo());
                livro.setAutor(novoLivro.getAutor());
                livro.setAnoPublicacao(novoLivro.getAnoPublicacao());

                return this.livroRepository.save(livro);
        });

//      return this.findById(id).map(livro -> {
//          livro.setTitulo(novoLivro.getTitulo());
//          livro.setAutor(novoLivro.getAutor());
//          livro.setAnoPublicacao(novoLivro.getAnoPublicacao());
//
//          return livro;
//      });
    }

    public Boolean delete(Long id){
        if(this.livroRepository.existsById(id)){
            this.livroRepository.deleteById(id);
            return true;
        }

        return false;

//      return this.livros.removeIf(livro -> livro.getId().equals(id));
    }

    private Boolean compararPorId(Livro livro, Long id){
        return livro.getId().equals(id);
    }
}
