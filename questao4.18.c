#include <stdio.h>  
int main(void){
  int i, j, n, m; 
  scanf("%d %d", &m, &n); 
  for(i = 1; i <= m; i++){
    for(j = 1; j <= n; j++)
      printf ("*"); 
    printf ("\n");}
  return 0;
  }