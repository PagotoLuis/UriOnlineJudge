#include <stdio.h>

void troca(int pessoa){
    int i, j, altura[pessoa], aux=0;
    for(i=0; i<pessoa; i++){
        do{
            scanf("%d", &altura[i]);
        }while(altura[i] < 20 || altura[i] > 230);
    }
    for(i=0; i<pessoa; i++){
        for(j=0; j<pessoa; j++){
            if(altura[i] < altura[j]){
                aux = altura[i];
                altura[i] = altura[j];
                altura[j] = aux;
            }
        }
    }
    for(i=0; i<pessoa; i++){
        printf("%d", altura[i]);
        printf(" ");
    }
    printf("\n");
}

int main(){
    int cidade, pessoa;
    int i;
    do{
    scanf("%d", &cidade);
    }while(cidade > 100 || cidade < 0);
    for(i=0; i<cidade; i++){
        do{
            scanf("%d", &pessoa);
        }while(pessoa > 3000000 || pessoa < 1);
        troca(pessoa);
        pessoa = 0;
    }
}
