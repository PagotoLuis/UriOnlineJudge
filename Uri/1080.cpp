#include <iostream>

using namespace std;

int main(){
    int n=10;
    int vetor[n], maior, aux=1;
    cin >> vetor[0];
    maior = vetor[0];
    for(int i=1; i<n; i++){
        cin >> vetor[i];
        if(vetor[i] > maior){
            maior = vetor[i];
            aux = i + 1;
        }
    }
    cout << maior << endl;
    cout << aux << endl;
}
