#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    char vet[1000];
    int i, flag, flag2, cont, cont2;
    cont = 0;
    cont2 = 0;
    flag = 0;
    flag2 = 0;
    while(scanf("%c", vet[i]) != EOF){
        while(i <= 1000){
            i++;
            cin >> vet[i];
            if(vet[i] == ')' || vet[i] == '('){
                if(flag2 == 0 && vet[i] == ')'){
                    flag = 1;
                    cout << "incorrect" << endl;
                    break;
                }
                if(vet[i] == '('){
                    flag2 = 1;
                    cont++;
                }
                if(flag2 == 1 && vet[i] == ')'){
                    flag2 = 0;
                    cont2++;
                }
            }
        }
        if(cont == cont2 && flag == 0)cout << "correct" << endl;
    }
}
