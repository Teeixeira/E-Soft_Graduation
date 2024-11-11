programa {
  
  inteiro projetos[3][3]
  inteiro x, y
  inteiro tempoProjeto[3]

  funcao inicio() {

    para(x = 0; x < 3; x ++) {
      para(y = 0; y < 3; y ++) {
        escreva("Informe o tempo gasto na ", y + 1,"° tarefa do ", x + 1, "° projeto: ")
        leia(projetos[x][y])
      }
    }

    para(x = 0; x < 3; x ++) {
      tempoProjeto[x] = somaTempoProjeto (projetos[x], 3)
    }

    para(x = 0; x < 3; x ++) {
      escreva("O tempo total gasto no projeto ", x + 1, " é de: ", tempoProjeto[x], " minutos\n")
    }
  }

  funcao inteiro somaTempoProjeto (inteiro linha[], inteiro tamanho) {

    inteiro soma = 0

    para(inteiro z = 0; z < tamanho; z ++) {
      soma = soma + linha[z]
    }

    retorne soma
  }
}