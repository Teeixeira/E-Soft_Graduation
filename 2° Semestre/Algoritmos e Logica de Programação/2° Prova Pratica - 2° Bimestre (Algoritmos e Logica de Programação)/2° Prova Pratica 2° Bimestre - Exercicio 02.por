programa {

  inteiro produtos[5][5]
  inteiro x, y
  real media[5]

  funcao inicio() {

    para(x = 0; x < 5; x ++) {
      para(y = 0; y < 5; y ++) {
        escreva("Informe o valor do ", y + 1, "° produto da ", x + 1, "° loja: ")
        leia(produtos[x][y])
      }
    }

    para(x = 0; x < 5; x ++) {
      media[x] = precoMedioProdutos (produtos[x], 5)
    }

    para(x = 0; x < 5; x ++) {
      escreva("A média de preços na ", x + 1, "° região é: ", media[x], "\n")
    }
  }

  funcao real precoMedioProdutos (inteiro linha[], inteiro tamanho) {

    inteiro soma = 0

    para(inteiro i = 0; i < tamanho; i++) {
      soma = soma + linha[i]
    }

    retorne soma / tamanho
  }
}