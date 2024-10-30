programa {
  funcao inicio() {
    cadeia nome, nomeM, nomeN
    inteiro idade, i, idadeM, idadeN


    i = 0
    idadeM = 0
    idadeN = 100

    escreva("Qual o seu nome?\n")
    leia(nomeM)
    escreva("Qual a sua idade?\n")
    leia(idadeM)

    faca{
      i++
      escreva("Qual o seu nome?\n")
      leia(nome)
      escreva("Qual a sua idade?\n")
      leia(idade)
      se(idade > idadeM) { 
        idadeM = idade
        nomeM = nome
      } senao {
        se(idade < idadeN) { 
          idadeN = idade
          nomeN = nome
        }
      }

      

    }enquanto(i<4)

    escreva("O nome da pessoa mais velha e ",nomeM," e a idade dela e ",idadeM,"\n")

    escreva("O nome da pessoa mais nova e ",nomeN," e a idade dela e ",idadeN,"\n")
  
    
  }
}