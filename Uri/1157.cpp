#include <iostream>

using namespace std;

int main(){
    int i, n, cont;
    cin >> n;
    cont = 0;
    for(i=1; i<=n; i++){
        if(n%i == 0){
            cont = cont + 1;
            cout << i << endl;
        }

    }
}




