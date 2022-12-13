#include <stdio.h>

int main(int argc, char** argv)
{
   int N, horas, horas_seg, minutos, segundos;
   horas_seg=3600;

   scanf("%d", &N);
   horas = (N/horas_seg);
   minutos = (N -(horas_seg*horas))/60;
   segundos = (N -(horas_seg*horas)-(minutos*60));
   printf("%d:%d:%d\n",horas,minutos,segundos);

   return 0;
}
