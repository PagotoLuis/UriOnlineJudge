#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, *m;
    char *l;
    int i, j, cont2;

    do{
        cont2 = 0;
        do{
            scanf("%d", &n);
        }while(n < 2 || n > (10*10*10*10) || n%2 != 0);

        m = (int*)malloc(n * sizeof(int));
        l = (char*)malloc(n * sizeof(char));

        for(i=0; i<n; i++){
            do{
                scanf("%d", &m[i]);
            }while(m[i] < 30 || m[i] > 60);
            do{
                scanf("%c", &l[i]);
            }while(l[i] != 'D' && l[i] != 'E');
        }
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(m[i] == m[j] && l[i] != l[j] && i!=j && m[i] != 0 && m[j]!= 0){
                    cont2 = cont2 + 1;
                    m[i] = 0;
                    m[j] = 0;
                }
            }
        }
        printf("%d\n", cont2);
        free(m);
        free(l);
    }while( n != EOF);
}
