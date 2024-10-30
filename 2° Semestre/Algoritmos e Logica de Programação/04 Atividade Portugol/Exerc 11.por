programa {
  funcao inicio() {
    cadeia nome,resp
    inteiro idade, i, idadeF
    caracter sexo

    idadeF = 0
    
    faca{
     escreva("\n Qual o seu nome?\n")
     leia(nome)
     escreva("Qual a sua idade?\n")
     leia(idade)
     escreva("Qual o seu Sexo?\n")
     leia(sexo) 
     se(sexo == "M" ou sexo == "F"){ 
       escreva("Cadastro feito com sucesso\n")
     }senao{
       escreva("Cadastro com informações inválidas, escolha um sexo válido")
       retorne
     }
     se(sexo == "F"){
      idadeF = idadeF + idade
     }
     escreva("Deseja continuar?\n")
     leia(resp)
     se(resp != "S" e resp != "s" e resp != "N" e resp !="n"){
      escreva("Escolha inválida")
      retorne
     }

     }enquanto(resp == "s" ou resp == "S")
    escreva("A media da idade do sexo feminino e ",idadeF / i)
  }
}