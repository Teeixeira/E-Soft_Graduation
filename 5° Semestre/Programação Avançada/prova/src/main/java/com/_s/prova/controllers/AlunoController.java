package com._s.prova.controllers;

import com._s.prova.models.AlunoModel;
import com._s.prova.services.AlunoService;
import org.springframework.web.bind.annotation.*;

import java.util.List;
import java.util.Optional;

@RestController
@RequestMapping(path = "/alunos")
public class AlunoController {

    private final AlunoService alunoService;

    public AlunoController(AlunoService alunoService){
        this.alunoService = alunoService;
    }


    @PostMapping
    public AlunoModel criarAluno(@RequestBody AlunoModel alunoModel){
        return alunoService.criarAluno(alunoModel);
    }

    @GetMapping
    public List<AlunoModel> buscarAlunos(){
        return alunoService.listarAlunos();
    }

    @GetMapping("/{id}")
    public Optional<AlunoModel> buscarAlunoPorId(@PathVariable Long id){
        return alunoService.findById(id);
    }

    @DeleteMapping("/{id}")
    public void deletarAluno(@PathVariable Long id){
        alunoService.deleteById(id);
    }

    @PutMapping("/{id}")
    public AlunoModel atualizarAluno(@PathVariable Long id, @RequestBody AlunoModel alunoModel){
        return alunoService.atualizar(id, alunoModel);
    }

}
