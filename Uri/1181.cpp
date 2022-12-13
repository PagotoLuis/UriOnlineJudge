#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(1);
    const int linha=12;
    const int coluna=12;
    float matriz[linha][coluna];

    float soma=0;
    int num, i, j;
    char opcao;
    cin >> num;
    cin >> opcao;
    if(num >= 0 && num<=11){
        for(i=0; i<linha; i++){
            for(j=0; j<coluna; j++){
                cin >> matriz[i][j];
            }
        }
        for(i=0; i<coluna; i++){
            soma = soma + matriz[num][i];
        }
        if(opcao == 'S')cout << soma << endl;;
        if(opcao == 'M')cout << soma/coluna << endl;
    }
 }
