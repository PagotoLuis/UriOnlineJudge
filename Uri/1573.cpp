#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){
    int a, b, c, aux;
    do{
        do{
        cin >> a >> b >> c;
        }while(a > 10*10*10 || b > 10*10*10 || c > 10*10*10);
        if(a == 0 || b == 0 || c == 0)exit(1);
        aux = cbrt(a*b*c);
        cout << aux << endl;
    }while(a != 0 || b != 0 || c != 0);
}
