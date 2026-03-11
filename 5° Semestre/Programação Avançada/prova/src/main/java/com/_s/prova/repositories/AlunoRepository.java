package com._s.prova.repositories;

import com._s.prova.models.AlunoModel;
import org.springframework.data.jpa.repository.JpaRepository;

public interface AlunoRepository extends JpaRepository<AlunoModel, Long> {

}
