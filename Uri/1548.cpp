#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int *vet, *aux;
    int casos, aluno, ic, i, j, cont;

    scanf("%d", &casos);
    for(ic=0; ic<casos; ic++){
            scanf("%d", &aluno);
            vet = (int*)malloc(aluno * sizeof(int));
            aux = (int*)malloc(aluno * sizeof(int));
            for(i=0; i<aluno; i++){
                scanf("%d", &vet[i]);
                aux[i] = vet[i];
            }
            j=0;
            cont = 0;
            sort(vet, vet+aluno);
            for(i=aluno-1; i>=0; i--){
                if(aux[j] == vet[i])cont++;
                ++j;
            }
            printf("%d\n", cont);
            free(aux);
            free(vet);
    }
}
