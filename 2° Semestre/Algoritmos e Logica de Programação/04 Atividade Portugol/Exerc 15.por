programa {
  funcao inicio() {

    /* 
    Código feito em exercicio de laço de repetição if else, poluido e pouco eficiente mas funcional
    */ 
   cadeia name, zodiaco
   inteiro day,month,realday 

   escreva("Qual o seu nome?\n")
   leia(name)
   escreva("Qual dia você nasceu?\n")
   leia(day)
   se(day > 31){
    escreva("Dia não existente")
    retorne
   }
   escreva("Qual mês você nasceu?\n")
   leia(month)
   se(month > 12){
    escreva("Mês não existente")
    retorne
   }senao se(month == 2 e day >= 29)
    {
      escreva("Data inválida")
      retorne
    }

    realday = day * month

    se(realday >= 21 e realday <= 38){
      zodiaco = "Aquário"
    }senao se(realday >= 22 ou realday <= 60)
     { 
      zodiaco = "Peixes"
     }senao se(realday >= 61 ou realday <= 80 )
      {
        zodiaco = "Áries"
      }senao se(realday >= 81 ou realday <= 100)
        {
          zodiaco = "Touro"
        }senao se(realday >= 101 ou realday <= 120)
          {
            zodiaco = "Gêmeos"
          }senao se(realday >= 121 ou realday <= 147)
            {
              zodiaco = "Câncer"
            }senao se(realday >= 148 ou realday <= 176)
              {
                zodiaco = "Leão"
              }senao se(realday >= 177 ou realday <= 198)
                {
                  zodiaco = "Virgem"
                }senao se(realday >= 199 ou realday <= 220)
                  {
                    zodiaco = "Libra"
                  }senao se(realday >= 221 ou realday <= 231)
                    {
                      zodiaco = "Escorpião"
                    }senao se(realday >= 232 ou realday <= 252)
                      {
                        zodiaco = "Sagitário"
                      }senao se(realday >= 252 ou realday <= 20)
                        {
                          zodiaco = "Capricórnio"
                        }

   escreva("O seu Zodiáco é ",zodiaco)
    
  }
}
