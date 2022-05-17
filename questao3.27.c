#include <stdio.h>
#include <stdlib.h>



int main() {
     

   int num, i, maior1 = 0, maior2 = 0;

   for( i = 0; i < 5; i++ )

   {

         printf("Digite o número: ");

         scanf("%d",&num);


        if(num > maior1){
            if(maior1 > maior2){
                maior2=maior1;
            }
            
            maior1=num;
        }
        if(maior1>=maior2 && num != maior1){
            if(num > maior2){
                maior2=num;
            }
        }

   }

   printf("O primeiro maior numero é: %d\n", maior1);

   printf("O segundo maior numero é: %d\n", maior2);

    return 0;
}