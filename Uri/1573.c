#include <stdio.h>

int main(){
    int vet[3], i;
        do{
            for(i=0; i<3; i++){
                do{
                    scanf("%d", &vet[i]);
                }while(vet[i] < 1 && vet[i] > (10*10*10));
            }

        }while(vet[0] && vet[1] && vet[2] != 0);


}
