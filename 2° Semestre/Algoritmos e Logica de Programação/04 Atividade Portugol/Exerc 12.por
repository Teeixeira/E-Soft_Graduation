programa {
  funcao inicio() {
    cadeia nome
    real nota1, nota2, media, totalmedia
    inteiro idade, i, r, a
    caracter sexo

    i = 0 
    r = 0
    a = 0
    totalmedia = 0
    
    faca{
      i++
     escreva("\n Qual o seu nome?\n")
     leia(nome)
     escreva("Qual a sua Nota 1?\n")
     leia(nota1)
     se(nota1 < 0 ou nota1 > 10){ 
      escreva("valor incorreto, por favor escreva um valor válido\n")
      retorne
     }
     escreva("Qual a sua nota 2?\n")
     leia(nota2) 
     se(nota2 < 0 ou nota1 > 10){ 
      escreva("valor incorreto, por favor escreva um valor válido\n")
      retorne
     }
     media = (nota1 + nota2 )/2
     totalmedia = totalmedia + media
     se( media > 5.9){ 
        ++a
        escreva("Parabéns vc foi aprovado\n")
      }senao{ 
        ++r 
        escreva("Infelizmente vc foi reprovado")

      }
      
     }enquanto(i<32)

     escreva("a media total dos alunos é \n ",totalmedia / i)
     escreva("a media de alunos reprovados e ",i/r," %" )
     escreva("a media de alunos aprovados e  ",a/r," %")

    
  }
}