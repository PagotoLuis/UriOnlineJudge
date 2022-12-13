#include <iostream>

using namespace std;

int main(){
    int n;
    int a, b, c, d;
    float calc;
    do{
        cin >> n;
    }while(n > 1000 || n < 1);
    do{
        cin >> a >> b
            >> c >> d;
    }while(b < 1 || d < 1);
    calc = (d - b)/(c - a);
    cout << calc;
}
