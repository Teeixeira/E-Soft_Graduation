programa {
  funcao inicio() {
    inteiro valor1, valor2, valor3,valormenor, valormaior
    
    escreva("Informe o primeiro valor\n")
    leia(valor1)
    valormenor = valor1
    escreva("Informe o segundo valor\n")
    leia(valor2)
    se(valormenor > valor2){
      valormenor = valor2
    }
    se(valor2 > valor1){
      valor1 = valor2 
    }
    escreva("Informe o terceiro valor\n")
    leia(valor3)
    se(valormenor > valor3){
      valormenor = valor3
    }
    se(valor3 > valor1){
      valor1 = valor3
    }
    

    escreva("O maior dos 3 valores informados e ",valor1,"\n")
    escreva("O menor dos 3 valores informados e ", valormenor)


    

  }
}
