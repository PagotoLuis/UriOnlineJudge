#include <stdio.h>
#include <iostream>

int main(){
    int *vet;
    int casos, aluno, ic, ia, i;

    scanf("%d", &casos);
    for(ic=0; ic<casos; ic++){
            scanf("%d", &aluno);
            vet = (int*)malloc(aluno * sizeof(int));
            for(i=0; i<aluno; i++){
                scanf("%d", &vet[i]);
            }

            sts :: sort(vet, vet+aluno);
    }

}
