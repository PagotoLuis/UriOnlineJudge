#include <iostream>

using namespace std;

int main(){
    int const n=10;
    int vetor[n];
    for(int i=0; i<=9; i++){
        cin >> vetor[i];
        if(vetor[i] <= 0){
            vetor[i] = 1;
            cout << "X[" << i << "] = " << vetor[i] << endl;
        }else{
            cout << "X[" << i << "] = " << vetor[i] << endl;
        }
    }
}
