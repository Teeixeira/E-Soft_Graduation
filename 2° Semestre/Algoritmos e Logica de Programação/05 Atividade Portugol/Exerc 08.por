programa {
  funcao inicio() {
    inteiro nota1, nota2,presenc,feito
    real media, total

    escreva("Qual a primeira nota?\n")
    leia(nota1)
    se(nota1 > 10){
      escreva("Digita um valor válido")
      retorne 
    }
    escreva("Qual a segunda nota?\n")
    leia(nota2)
    se(nota1 > 10){
      escreva("Digita um valor válido")
      retorne 
    }

    media = (nota1 + nota2)/2

    escreva("Qual a carga horária?\n")
    leia(presenc)
    escreva("Qual a carga horária cumprida?\n")
    leia(feito)
    
    total = (feito / presenc) * 100

    se(media >= 6 e total >= 75 ){
      escreva("Aluno aprovado")
    }senao{
        escreva("Aluno Reprovado")
      }



  }
}
