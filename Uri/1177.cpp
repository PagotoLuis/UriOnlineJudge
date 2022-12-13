#include <iostream>

using namespace std;


int main(){
    int valor, n=1000;
    int vetor[n], soma=0;
    int i=0;
    cin >> valor;
    if(valor >=2 && valor <=50){
        for(i=0; i<n; i++){
            if(soma < valor){
                vetor[i] = soma;
                soma = soma + 1;
            }else{
                soma = 0;
                vetor[i] = soma;
                soma = soma + 1;
            }
            cout << "N[" << i << "] = " << vetor[i] << endl;

        }
    }

}

