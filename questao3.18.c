/*Calculadora de limite de crédito. Desenvolva um
programa em C que determine se um cliente de uma
loja de departamentos excedeu seu limite de crédito. Os
seguintes fatos estão disponíveis para cada cliente:
a) Número de conta.
b) Saldo no início do mês.
c) Total de todos os encargos desse cliente nesse mês.
d) Total de todos os créditos aplicados à conta desse
cliente nesse mês.
e) Limite de crédito autorizado.

O programa deverá ler cada um desses fatos, calcular o
novo saldo (= saldo inicial + encargos - créditos)
e determinar se o novo saldo é superior ao limite de

crédito do cliente. Para os clientes cujo limite de crédi-
to foi ultrapassado, o programa deverá exibir o número

de conta do cliente, o limite de crédito, o novo saldo e
a mensagem ‘Limite de crédito ultrapassado’. Veja um
exemplo do diálogo de entrada/saída: */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
     int nConta;
     float saldoInicial, tolEncargos, creditos, limCredito, novoSaldo;

      printf("Informe o número da conta. -1 para encerrar: ");
      scanf("%d", &nConta);

      while(nConta == -1){
          printf("FIM\n");
          
          break;
      }
     
       while (nConta != -1){
          
          
      printf("Informe o saldo inicial: ");
      scanf("%f", &saldoInicial);

      printf("Informe o total de encargos:  ");
      scanf("%f", &tolEncargos);

      printf("Informe o total de créditos: ");
      scanf("%f", &creditos);

      printf("Informe o limite de crédito: ");
      scanf("%f", &limCredito);

      novoSaldo = saldoInicial + tolEncargos - creditos; 

      if(novoSaldo > limCredito){

      printf("Conta: %d\n",nConta);
      printf("Limite de crédito: %.2f\n", limCredito);
      printf("Saldo: %.2f\n", novoSaldo);
      printf("Limite de crédito ultrapassado\n");
      
    } 
            
            break;
           
     }
     
      
     
     return 0;
}