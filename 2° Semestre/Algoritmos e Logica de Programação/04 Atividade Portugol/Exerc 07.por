programa {
  funcao inicio() {
    inteiro i, valor
    real media

    i = 0  
    media = 0 

    faca{ 
      escreva("Por favor escreva o ",++i," numero, escolha entre 10 e 50\n")
      leia(valor)
      se(valor <= 10 ou valor>=51){ 
        escreva("Valor escolhido inválido, ecolha entre 10 e 50")
        retorne
      }
      media = media + valor
    }enquanto (i < 15)

    escreva("a media de todos os valores e ",media / i)

    


    
  }
}
