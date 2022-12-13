#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(1);
    int n = 100;
    float vetor[n];

    for(int i=0; i<n; i++){
        cin >> vetor[i];
        if(vetor[i] <= 10){
            cout << "A[" << i << "] = " << vetor[i] << endl;

        }


    }



}
