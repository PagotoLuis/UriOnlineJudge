#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){

cout << fixed << setprecision(2);

    string nome;
    float salario;
    float vendas;
    double soma, media;

    cin >> nome;
    cin >> salario;
    cin >> vendas;

    media = vendas * 15/100;
    soma = salario + media;

    cout << "TOTAL = R$ " << soma << endl;

}
