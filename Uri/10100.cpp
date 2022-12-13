#include <iostream>
#include <iomanip>

using namespace std;

int main(){

 cout << fixed << setprecision(2);

        int codigo1, codigo2, pecas1, pecas2;
        float valor1, valor2;
        double media;

        cin >> codigo1;
        cin >> pecas1;
        cin >> valor1;
        cin >> codigo2;
        cin >> pecas2;
        cin >> valor2;

        media = ((pecas1 * valor1) + (pecas2 + valor2));

        cout << "VALOR A PAGAR: R$ " << media << endl;








}
