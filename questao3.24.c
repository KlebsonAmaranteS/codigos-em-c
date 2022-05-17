#include <stdio.h>
#include <stdlib.h>


int main(){
int n,contador,maior = 0;
     for (contador = 0; contador<10;contador++){
        printf("\n Informe um número: ");
        scanf("%d",&n);

        if(n>maior){
            maior=n;
            

        }
        if(n>maior && n!=0){
            maior=n;
        }

    printf("Maior numero %d\n",maior);

     }

     }