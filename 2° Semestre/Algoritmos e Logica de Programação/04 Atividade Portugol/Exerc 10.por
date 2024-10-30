programa {
  funcao inicio() {
    inteiro i,v, num
    real mediaimpar

    i = 0 
    v = 0
    mediaimpar = 0

    faca{
      escreva("escreva o ",++i," numero \n")
      leia(num)
      se(num % 2 == 0){ 
        escreva("O número é PAR\n")
      }senao{
        escreva("O número é impar\n")
        mediaimpar = mediaimpar + num
        v++
      }
    }enquanto(i<10)
    escreva("a media dos valores impares é ",mediaimpar/v) 
    
  }
}