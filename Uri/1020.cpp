#include <iostream>
using namespace std;

int main (){
    int n,ano,meses,dias;

    cin >> n;

    ano = n / 365;
    meses = ( n % 365)/30;
    dias = ( n % 365) % 30;

    cout << ano << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;


}
