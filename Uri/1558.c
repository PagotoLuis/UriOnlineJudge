#include <stdio.h>
#include <math.h>


int main(){
    int valor, i, j, flag, cont=0;

    while(cont < 10){
        do{
            scanf("%d", &valor);
        }while(valor >10000 || valor < -10000);
        flag=0;
        for(i=-valor; i<valor; i++){
            if(flag == 1 || valor == 0){
                printf("YES\n");
                break;
            }
            for(j=-valor; j<valor; j++){
                if((pow(i, 2))+(pow(j, 2)) == valor){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0){
            printf("NO\n");
        }
        ++cont;
    }
}
