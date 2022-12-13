#include <iostream>

using namespace std;

int main(){
    const int n=10;
    int vetor[n];
    int valor;
    cin >> valor;
    if(valor <= 50){
    for(int i=0; i<=9; i++){
     vetor[i] = valor;
     valor = valor + valor;
     cout << "N[" << i << "] = " << vetor[i] << endl;
    }
    }




}
