#include <iostream>

using namespace std;

int main(){
    int n = 20;
    int vetor[n];
    int i=0;
    for(int i=n-1; i>=0; i--)
        cin >> vetor[i];
    for(i; i<n; i++){
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }
}
