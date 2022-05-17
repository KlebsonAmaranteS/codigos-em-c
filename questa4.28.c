#include <stdio.h>
#include <stdlib.h>

int main(){

   int nFuncionarios, qtdHoras,iProd;
   float gerente, tHora, tCom, tUnd, salario;

   printf("Informe o código do funcionario: \n1 = GERENTES\n2 = TRABALHADORES POR HORA\n3 = TRABALHADORES COMISSIONADOS\n4 = TRABALHADORES POR UNIDADE\n ");
   scanf("%d", &nFuncionarios);

   
   switch (nFuncionarios){
       
   case 1:
      printf("Informe quanto ganha por hora o gerente: R$");
      scanf("%f", &gerente);    
      printf("Informe quantas horas ele trabalhou: ");
      scanf("%d", &qtdHoras);
      salario = gerente * qtdHoras;
      printf("O Salário fixo do Gerente é: R$%.2f\n", salario);
           break;

    case 2: 
      printf("Informe quanto ganha por hora o trabalhador: R$");
      scanf("%f", &tHora);    
      printf("Informe quantas horas ele trabalhou: ");
      scanf("%d", &qtdHoras);
      if(qtdHoras > 40){
      salario = tHora * qtdHoras * 1.5;
      printf("O Salário do trabalhador é: R$%.2f\n", salario);
     } 
     
      else{
      salario = tHora * qtdHoras;
      printf("O Salário do trabalhador é: R$%.2f\n", salario);
    }
        break;

    case 3: 
        printf("Qual o valor das vendas do trabalhador: R$");
        scanf("%f", &tCom);
        salario = (250.00 * tCom) * 0.057;
        printf("O salário do trabalhador é: R$%.2f\n", salario);
                  break;
    case 4:
      printf("Informe quanto ganha por hora o trabalhador: R$");
      scanf("%f", &tUnd);    
      printf("Informe quantos itens ele produziu: ");
      scanf("%d", &iProd);
      printf("Informe a quantidade de horas trabalhadas: ");
      scanf("%d", &qtdHoras);
      salario = (tUnd * iProd) * qtdHoras;
      printf("O Salário fixo do trabalhador é: R$%.2f\n", salario);
           break;


   default:
    printf("Valor inválido\n");
       break;
   }

  return 0;

}