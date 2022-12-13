#include <iostream>
#include <iomanip>
using namespace std;

int main(){
cout << fixed << setprecision(2);
    int number, hora;
    float Hrsalario;
    double calculo;

    cin >> number;
    cin >> hora;
    cin >> Hrsalario;

    calculo = hora * Hrsalario;

    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << calculo << endl;


}
