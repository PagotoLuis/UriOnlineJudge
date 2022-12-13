#include <iostream>

using namespace std;

int main(){
    int n, cont2 = 4, i=1, cont = 1;
    cin >> n;
    while(cont <= n){
        for(i; i < cont2; i++){
            cout << i << " ";
        }
        cout << "PUM" << endl;
        cont = cont + 1;
        i = i + 1;
        cont2 = cont2 + 4;

    }
}
