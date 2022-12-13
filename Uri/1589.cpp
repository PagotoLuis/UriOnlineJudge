#include <iostream>

using namespace std;

int main(){
    int r=2;
    int valor,j ,i;
    unsigned long int soma;
    cin >> valor;
    if(valor <=10000){
        unsigned long int matriz[valor][r];
        for(i=0; i<valor; i++){
            soma = 0;
            for(j=0; j<r; j++){
                cin >> matriz[i][j];
                soma = soma + matriz[i][j];
            }
            cout << soma << endl;
        }
    }

}
