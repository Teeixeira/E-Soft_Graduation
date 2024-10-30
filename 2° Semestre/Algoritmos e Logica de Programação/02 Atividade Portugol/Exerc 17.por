programa {
  funcao inicio() {
    inteiro idade1, idade2, idade3, idade4
    real media
    cadeia nome1, nome2, nome3, nome4
    /* modelo feito apenas para fins de atividade, forma mais otimizada possível seria sem salvar a idade de cada um, mas ir acumulando todos em 1 único conforme
    o usuario ir colocando os nomes */

    escreva("Qual o seu nome?\n")
    leia(nome1)
    escreva("Qual a sua idade?\n")
    leia(idade1)
    escreva("Qual o seu nome?\n")
    leia(nome2)
    escreva("Qual a sua idade?\n")
    leia(idade2)
    escreva("Qual o seu nome?\n")
    leia(nome3)
    escreva("Qual a sua idade?\n")
    leia(idade3)
    escreva("Qual o seu nome?\n")
    leia(nome4)
    escreva("Qual a sua idade?\n")
    leia(idade4)

    media = (idade1 + idade2 + idade3 + idade4)/4 


    escreva("o resultado da media da idade de todos e ", media)

  }
}
