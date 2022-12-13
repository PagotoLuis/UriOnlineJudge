#include <iostream>

using namespace std;

int main(){
    int valor, i, maior;
    while(!cin.eof()){
    maior = -9999999;
    do{
        cin >> valor;
    }while(valor <= 1 && valor >= 500);
    int vet[valor];
    for(i=0; i<valor; i++){
        do{
            cin >> vet[i];
        }while(vet[i] <= 1 && vet[i] >= 50);
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    if(maior < 10)cout << 1 << endl;
    if(maior >= 10 && maior < 20)cout << 2 << endl;
    if(maior >= 20)cout << 3 << endl;
    }

}
