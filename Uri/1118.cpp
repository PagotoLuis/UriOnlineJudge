#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(2);
    double nota, media, nota2;
    int X;
    do{
    do{
        cin >> nota;
        if(nota >= 0 && nota <= 10){
            break;
        }else{
            cout << "nota invalida" << endl;
        }

    }while(nota >= 0 || nota <= 10);
    do{
        cin >> nota2;
        if(nota2 >= 0 && nota2 <= 10){
            break;
        }else{
            cout << "nota invalida" << endl;
        }

    }while(nota2 >= 0 || nota2 <= 10);
    media = (nota + nota2)/2;
    cout << "media = " << media << endl;
    do{
    cout << "novo calculo (1-sim 2-nao)" << endl;
    cin  >> X;
    if(X == 1 || X ==2){
        break;
    }else{
    }
    }while(X != 2 || X != 1);

    }while(X == 1);
}
