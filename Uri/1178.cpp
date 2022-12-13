#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(4);
    double valor;
    int n=100;
    double vetor[n];
    cin >> valor;
    vetor[0] = valor;
    cout << "N[" << 0 << "] = " << vetor[0] << endl;
    for(int i=1; i<n; i++){
            vetor[i] = vetor[i-1] / 2;
            cout << "N[" << i << "] = " << vetor[i] << endl;
    }
}
