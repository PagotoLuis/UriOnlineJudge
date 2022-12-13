#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int n, maior, i;
    maior = 99999;
    for(i=1; i<=10; i++){
        cin >> n;
        if(n < maior){
            maior = n;

        }
    }
    cout << maior;
}
