#include <iostream>
#include <string>
using namespace std;


int main(){
    int valor;
    int i, j;
    cin >> valor;
    if(valor >=0 && valor<=100){
        string esc1, esc2;
        for(i=1; i<=valor; i++){
                cin >> esc1 >> esc2;

                if(esc1 == "pedra" || esc1 == "papel" || esc1 == "tesoura" || esc1 == "lagarto" || esc1 == "Spock"){
                    if(esc1 == "tesoura" && esc2 == "papel")cout << "Caso #" << i << ": " << "Bazinga!" << endl;
                    if(esc1 == "papel" && esc2 == "pedra")cout << "Caso #" << i << ": " << "Bazinga!" << endl;
                    if(esc1 == "pedra" && esc2 == "lagarto")cout << "Caso #" << i << ": " << "Bazinga!" << endl;
                    if(esc1 == "lagarto" && esc2 == "Spock")cout << "Caso #" << i << ": " << "Bazinga!" << endl;
                    if(esc1 == "Spock" && esc2 == "tesoura")cout << "Caso #" << i << ": " << "Bazinga!" << endl;
                    if(esc1 == "tesoura" && esc2 == "lagarto")cout << "Caso #" << i << ": " << "Bazinga!" << endl;
                    if(esc1 == "lagarto" && esc2 == "papel")cout << "Caso #" << i << ": " << "Bazinga!" << endl;
                    if(esc1 == "papel" && esc2 == "Spock")cout << "Caso #" << i << ": " << "Bazinga!" << endl;
                    if(esc1 == "Spock" && esc2 == "pedra")cout << "Caso #" << i << ": " << "Bazinga!" << endl;
                    if(esc1 == "pedra" && esc2 == "tesoura")cout << "Caso #" << i << ": " << "Bazinga!" << endl;
                }
                if(esc2 == "pedra" || esc2 == "papel" || esc2 == "tesoura" || esc2 == "lagarto" || esc2 == "Spock"){
                    if(esc2 == "tesoura" && esc1 == "papel")cout << "Caso #" << i << ": " << "Raj trapaceou!" << endl;
                    if(esc2 == "papel" && esc1 == "pedra")cout << "Caso #" << i << ": " << "Raj trapaceou!" << endl;
                    if(esc2 == "pedra" && esc1 == "lagarto")cout << "Caso #" << i << ": " << "Raj trapaceou!" << endl;
                    if(esc2 == "lagarto" && esc1 == "Spock")cout << "Caso #" << i << ": " << "Raj trapaceou!" << endl;
                    if(esc2 == "Spock" && esc1 == "tesoura")cout << "Caso #" << i << ": " << "Raj trapaceou!" << endl;
                    if(esc2 == "tesoura" && esc1 == "lagarto")cout << "Caso #" << i << ": " << "Raj trapaceou!" << endl;
                    if(esc2 == "lagarto" && esc1 == "papel")cout << "Caso #" << i << ": " << "Raj trapaceou!" << endl;
                    if(esc2 == "papel" && esc1 == "Spock")cout << "Caso #" << i << ": " << "Raj trapaceou!" << endl;
                    if(esc2 == "Spock" && esc1 == "pedra")cout << "Caso #" << i << ": " << "Raj trapaceou!" << endl;
                    if(esc2 == "pedra" && esc1 == "tesoura")cout << "Caso #" << i << ": " << "Raj trapaceou!" << endl;
                }
                if(esc1 == esc2)cout << "Caso #" << i << ": De novo!" << endl;
        }
    }
}
