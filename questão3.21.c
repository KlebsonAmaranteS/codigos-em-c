#include <stdio.h>
#include <stdlib.h>

int main(){

    int hrTrabalhadas;
    float salHora, salario;

    printf("Digite as horas trabalhadas. -1 para encerrar: ");
    scanf("%d", &hrTrabalhadas);

    while (hrTrabalhadas == -1){
        printf("FIM\n");
        break;
    }

    while (hrTrabalhadas != -1){
        printf("Digite o salário por hora do funcionário: R$");
        scanf("%f", &salHora);

        if (hrTrabalhadas <= 40){
            salario = salHora * hrTrabalhadas;
            printf("Salário é: R$%.2f\n", salario);
        }
           else if (hrTrabalhadas > 40){
              salario = (salHora * hrTrabalhadas ) + salHora / 2;
              printf("O Salário é: R$%.2f\n", salario);
        }
    
       break;
    }


    
    





}