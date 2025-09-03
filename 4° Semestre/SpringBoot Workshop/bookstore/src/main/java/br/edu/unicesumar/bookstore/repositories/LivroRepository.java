package br.edu.unicesumar.bookstore.repositories;

import br.edu.unicesumar.bookstore.entities.Livro;
import org.springframework.data.jpa.repository.JpaRepository;

public interface LivroRepository extends JpaRepository<Livro, Long> {

}
