#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, it,*aux, *vet, n, i, j, cont;

    scanf("%d", &t);
    for(it=0; it<t; it++){
        cont = 0;
        scanf("%d", &n);
        vet = (int*)malloc(n * sizeof(int));
        aux = (int*)malloc(n * sizeof(int));
        for(i=0; i<n; i++){
            scanf("%d", &vet[i]);
        }
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(vet[i] == vet[j] && i != j && ){
                    aux[i] == vet[i];
                }
            }
        }
        printf("%d\n", (n - cont));
    }

}
