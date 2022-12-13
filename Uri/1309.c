#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, valor, cont, aux, aux2, cont2;
    char *vet;

    while(scanf("%d", &valor) != EOF){
        cont = 0;
        aux = valor;
        while (aux != 0){
            cont = cont + 1;
            aux = aux / 10;
        }
        scanf("%d", &aux);
        vet = (char*)calloc(cont, sizeof(char));
        sprintf(vet,"%d",valor);
        for(i=0; i<cont; i = i + 3){
            cont2 = cont2 + 3;
        }
        cont2 = cont2 - cont;

        printf("$");
        for(i=0; i<cont; i++){
            printf("%c", vet[i]);
            if(cont2 > 0){
                if(i == i + )printf(",");
            }
        }
        if(aux < 10)
            printf(".0%d\n", aux);
        else
            printf(".%d\n", aux);
        free(vet);
    }


}
