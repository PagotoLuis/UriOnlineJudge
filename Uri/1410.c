  #include <stdio.h>
  #include <stdlib.h>
  int main (){

      int *p;
      int num;
      printf("\nDigite o tamanho do vetor-->");
      scanf("%d", &num); // grava na variável (num) o tamanho do vetor que será alocado

      p=(int *)malloc(num*sizeof(int));

      if (!p){
          printf ("** \n\nErro: Memoria Insuficiente\n\n **");
          exit;
      }else{
          printf ("** \n\nMemoria Alocada com Sucesso\n\n **");
      }
      return (0);
  }
