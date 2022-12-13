#include <iostream>
#include <iomanip>

using namespace std;
void aumento_salario(float valor,int perc){
        float diminui, media;
        media = valor +((valor * perc)/100);
        diminui = media - valor;
        cout << "Novo salario: " << media << endl;
        cout << "Reajuste ganho: " << diminui << endl;
        cout << "Em percentual: " << perc << " %" << endl;
}
int main(){
    cout << fixed << setprecision(2);
    float valor;
    int perc;
    cin >> valor;
    if(valor >=0 && valor <= 400.00)perc=15,aumento_salario(valor, perc);
    if(valor >=400.01 && valor <= 800.00)perc=12,aumento_salario(valor, perc);
    if(valor >=800.01 && valor <= 1200.00)perc=10,aumento_salario(valor, perc);
    if(valor >=1200.01 && valor <= 2000.00)perc=7,aumento_salario(valor, perc);
    if(valor > 2000)perc=4,aumento_salario(valor, perc);
}
