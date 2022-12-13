#include <iostream>

using namespace std;

int main(){
    int NUMERO, GAS, ALCOOL, DIESEL, FIM;
    ALCOOL = 0;
    GAS = 0;
    DIESEL = 0;
    FIM = 0;
    cin >> NUMERO;

    do
        switch(NUMERO){
            case 1:
            ALCOOL = ALCOOL + 1;
            cin >> NUMERO;
            break;

            case 2:
            GAS = GAS + 1;
            cin >> NUMERO;
            break;

            case 3:
            DIESEL = DIESEL + 1;
            cin >> NUMERO;
            break;

            case 4:
            break;
            default :
                cin >> NUMERO;
                break;

            }
     while(NUMERO != 4);
     cout << "MUITO OBRIGADO" << endl;
     cout << "Alcool: " << ALCOOL << endl;
     cout << "Gasolina: " << GAS << endl;
     cout << "Diesel: " << DIESEL << endl;


}
