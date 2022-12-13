#include <stdio.h>
#include <stdlib.h>


int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(){
    int casos, ij, pessoas,*alt, i, aux, j;

    scanf("%d", &casos);

    for(ij=0; ij < casos; ij++){
            scanf("%d", &pessoas);

            alt = (int*)malloc(pessoas * sizeof(int));

            for(i=0; i<pessoas; i++){
                scanf("%d", &alt[i]);
            }

            qsort(alt, pessoas, sizeof(int), compare);

            for(i=0; i<pessoas; i++){
                printf("%d ", alt[i]);
            }
            printf("\n");
            free(alt);
    }
}
