#include <stdio.h>

int main(){
    int valor, i, j, calc;

    while(scanf("%d", &valor) != EOF){
        calc = (valor/2)+0.5;
        for(i=1; i<calc+2; i++){
            for(j=0; j<valor; j++){
                if(j > (calc-i) && j < (calc+i))printf("*");
                else if(j < (calc+i))printf(" ");
            }
        printf("\n");
        }
        j=0;
        for(i=0; i<calc+1; i++){
            if(i == calc)printf("*\n");
            else printf(" ");
        }
        for(i=0; i<calc+2; i++){
            if(i == calc-1 || i == calc || i == calc+1)printf("*");
            else printf(" ");
        }
        printf("\n\n");
    }
}
