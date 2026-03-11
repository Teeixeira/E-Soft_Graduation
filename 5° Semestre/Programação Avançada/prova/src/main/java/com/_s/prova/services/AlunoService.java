package com._s.prova.services;

import com._s.prova.models.AlunoModel;
import com._s.prova.repositories.AlunoRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;
import java.util.Optional;

@Service
public class AlunoService {

    private final AlunoRepository alunoRepository;

    public AlunoService(AlunoRepository alunoRepository){
        this.alunoRepository = alunoRepository;
    }

    public AlunoModel criarAluno(AlunoModel alunoModel){
        return alunoRepository.save(alunoModel);
    }

    public List<AlunoModel> listarAlunos(){
        return alunoRepository.findAll();
    }

    public Optional<AlunoModel> findById(Long id){
        return alunoRepository.findById(id);
    }

    public void deleteById(Long id){
        alunoRepository.deleteById(id);
    }

    public AlunoModel atualizar(Long id, AlunoModel alunoModel){
        AlunoModel model = alunoRepository.findById(id).get();
        model.setNome(alunoModel.getNome());
        return alunoRepository.save(model);
    }
}
