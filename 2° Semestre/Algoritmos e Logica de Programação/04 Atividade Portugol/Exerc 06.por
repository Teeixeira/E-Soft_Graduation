programa {
  funcao inicio() {
    cadeia nome
    inteiro idade, i
    caracter sexo
    

    escreva("Qual o seu nome?\n")
    leia(nome)
    escreva("Qual a sua idade?\n")
    leia(idade)
    se(idade < 10 ou idade > 100 ){ 
      escreva("idade inválida, usuário negado\n")
      retorne 
    }
    escreva("Qual o seu Sexo?\n")
    leia(sexo) 
    se(sexo == "M" ou sexo == "F"){ 
      escreva("Cadastro feito com sucesso")
    }senao{
      escreva("Cadastro com informações inválidas, escolha um sexo válido")
    }
    
  }
}
