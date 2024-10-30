programa {
  funcao inicio() {
    inteiro i,masc, fem, idade, filhos, contf,idadejovem
    real idadefem
    cadeia nome, nomejovem
    caracter sexo

    i = 0
    masc = 0
    fem = 0
    idadefem = 0
    contf = 0
    idadejovem = 100

    faca{
      escreva("Qual o nome da ",++i," pessoa?\n")
      leia(nome)
      escreva("Você tem quantos filhos? \n")
      leia(filhos)
      escreva("Qual a sua idade?\n")
      leia(idade)
      se(idade > 100 ou idade < 0)
      { 
        escreva("Idade impossível, escreva o verdadeiro valor")
        retorne
      }
      se(idadejovem > idade){
        idadejovem = idade
        nomejovem = nome
      }
      escreva("Qual o seu sexo?\n")
      leia(sexo)
      se(sexo != "F" e sexo != "M"){
        escreva("Sexo inexistente, escolha um sexo válido")
        retorne
      }senao se(sexo == "M")
       { 
        masc++

       }senao se(sexo == "F")
        {
          fem++
        }
    se(sexo == "F" e filhos == 0)
    {
      idadefem = idadefem + idade
      contf++

    }

    }enquanto(i < 2)

    escreva("a porcentagem de Homem e ", (masc/i) * 100, "%\n")
    escreva("a porcentagem de Mulher e ", (fem/i) * 100, "%\n")
    escreva("A média de idade das mulheres sem filhos e ",idadefem/contf ," \n")
    escreva("O nome da pessoa mais jovem e ",nomejovem,"e a idade dela e ",idadejovem, "\n")

    
  }
}
