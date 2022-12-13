#include <iostream>

using namespace std;

int main (){
    int valor,cont, soma=0;
        for(int i=0; i=-1; i++){
        cin >> valor;
        if(valor == 0)break;
            soma = valor;
            cont = 0;
            if(valor%2 == 0){
                while(cont != 4){
                    valor = valor + 2;
                    soma = valor + soma;
                    cont = cont + 1;
                }
                    cout << soma << endl;
            }else{
                soma = soma + 1;
                valor = valor + 1;
                while(cont != 4){
                    valor = valor + 2;
                    soma = valor + soma;
                    cont = cont + 1;
                }
                    cout << soma << endl;
            }
        }
}

