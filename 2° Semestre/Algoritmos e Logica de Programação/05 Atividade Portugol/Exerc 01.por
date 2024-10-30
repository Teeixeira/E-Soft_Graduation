programa {
  funcao inicio() {
    cadeia nome
    inteiro idade

    escreva("Informe um nome\n")
    leia(nome)
    escreva("Informe a sua idade\n")
    leia(idade) 
    se(idade >= 18){
      escreva("Parabéns ",nome," você está hábil a tirar CNH")
    }senao{
      escreva("Infelizmente ",nome," não está hábil ainda a tirar CNH")
    }
  }
}
