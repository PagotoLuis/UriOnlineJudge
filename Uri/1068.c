#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *exp;
    int i, cont, flag;

    exp = (char*)calloc(10000, sizeof(char));

    while(scanf("%s", exp) != EOF){

        fflush(stdin);
        cont = 0;
        flag = 0;

        for(i=0;exp[i] != '\0'; i++){
            if(exp[i] == '('){
                cont++;
            }
            if(exp[i] == ')' && cont == 0){
                    printf("incorrect\n");
                    flag = 1;
                    break;
            }
            if(exp[i] == ')' && cont > 0){
                cont--;
            }
        }
        if(cont > 0)printf("incorrect\n");
        if(cont == 0 && flag == 0)printf("correct\n");
        free(exp);
        exp = (char*)calloc(10000, sizeof(char));
    }
    free(exp);
}
