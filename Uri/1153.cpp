#include <iostream>

using namespace std;

int main (){
    int n, cont, total=1;
    cin >> n;
    for(cont=n; n>1; n--){
cout << n << endl;
        total = total * (n);
    }
cout << total << endl;
}
