programa {
  funcao inicio() {
    real valor,valor2

    escreva("Informe um valor\n")
    leia(valor)
    escreva("Informe um segundo valor\n")
    leia(valor2)
    se(valor > valor2){
      escreva("O valor ",valor," é o maior dos dois\n")
      escreva("O valor ",valor2," é o menor dos dois\n")
    }senao se(valor < valor2)
      {
        escreva("O valor ",valor2," é o maior dos dois\n")
        escreva("O valor ",valor," é o menor dos dois\n")
      }senao{
        escreva("Os dois valores são iguais")
      }


  }
}
