#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, i, cont;
    int *m=NULL;
    char *l=NULL;
    while(cont < 10){
        l = NULL;
        m = NULL;
        do{
            scanf("%d", &n);
        }while(n < 2 || n > (10*10*10*10) || n%2 != 0);

        for(i=0; i<n; i++){
            m = (int*)realloc(m, i * sizeof(int));
            l = (char*)realloc(l, i * sizeof(char));
            do{
                scanf("%d", &m[i-1]);
            }while(m < 30 || m > 60);
            fflush(stdin);
            do{
                scanf("%c", &l[i-1]);
            }while(l < 30 || l > 60);
            fflush(stdin);


        }
    }
}
