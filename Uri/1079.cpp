#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(1);
    int n, i;
    float vetor[3], soma;
    cin >> n;
    for(i=1; i<=n; i++){
        for(int p=0; p<3; p++){
            cin >> vetor[p];
        }
        soma = ((vetor[0]*2)/10) + ((vetor[1]*3)/10) + ((vetor[2]*5)/10);
        cout << soma << endl;
    }
}
