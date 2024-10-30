programa {
  funcao inicio() {
    inteiro idade
    real salario
    cadeia nome

    escreva("Qual o seu nome?\n")
    leia(nome)
    escreva("Qual a sua idade?\n")
    leia(idade)
    escreva("Qual o seu salário?\n")
    leia(salario)
    se(idade <= 35){
      escreva("O seu novo salário é ",salario * 1.12)
    }senao se(idade >= 36 e idade <= 50)
      {
        escreva("O seu novo salário é ",salario * 1.145)
      }senao se(idade > 50)
        {
          escreva("O seu novo salário é ",salario * 1.17)
        }

  }
}
