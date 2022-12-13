#include <iostream>

using namespace std;

int main(){
    int n, aux, cont=0;;
    cin >> n;
    if(n > 1 && n < 1000){
        long int vetor[n];
        for(int i=0; i<n; i++){
            cin >> vetor[i];
            if(i == 0){
                aux = vetor[i];
            }
            if(vetor[i] < aux){
                aux = vetor[i],
                cont = i;
            }
        }
        cout << "Menor valor: " << aux << endl;
        cout << "Posicao: " << cont << endl;
    }
}
