#include <iostream>

using namespace std;

int main(){
    int valor1, valor2, aux;
    cin >> valor1;
    cin >> valor2;
    if(valor1 > valor2){
        aux=valor1;
        valor1=valor2;
        valor2=aux;
    }
    for(int i=valor1; i<valor2; i++){
        if(i%5 == 2 || i%5 == 3){
            cout << i << endl;
        }
    }
}
