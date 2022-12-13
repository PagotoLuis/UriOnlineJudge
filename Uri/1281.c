#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int idas, ii, frut, i, buy, *valor, j;
    char **vet2, **aux;
    float *vet, calc;

    scanf("%d", &idas);

    for(ii=0; ii<idas; ii++){
            scanf("%d", &frut);
            vet = (float*)malloc(frut * sizeof(float));
            vet2 = (char**)malloc(frut * sizeof(char*));
            for(i=0; i<frut; i++){
                vet2[i] = (char*)calloc(50, sizeof(char));
            }
            for(i=0; i<frut; i++){
                scanf("%s%f", vet2[i], &vet[i]);
            }

            scanf("%d", &buy);
            aux = (char**)malloc(buy * sizeof(char*));
            valor = (int*)malloc(buy * sizeof(int));
            for(i=0; i<buy; i++){
                aux[i] = (char*)calloc(50, sizeof(char));
            }
            for(i=0; i<buy; i++){
                scanf("%s%d", aux[i], &valor[i]);
            }
            calc = 0;
            for(i=0; i<buy; i++){
                for(j=0; j<frut; j++){
                    if(strcmp (aux[i],vet2[j]) == 0){
                        calc = calc + (valor[i] * vet[j]);
                    }
                }
            }
            printf("R$ %.2f\n", calc);
            for(i=0; i<frut; i++){
                free(vet2[i]);
            }
            for(i=0; i<buy; i++){
                free(aux[i]);
            }
            free(vet2);
            free(aux);
            free(vet);
            free(valor);

    }
}
