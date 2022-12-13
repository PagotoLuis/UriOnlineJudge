#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(1);
    const int linha=12;
    const int coluna=12;
    double matriz[linha][coluna];

    double soma=0;
    int i ,j ,cont=0;
    char opera;

    cin >> opera;
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            cin >> matriz[i][j];
        }
    }
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            if(j > i && i + j > linha-1){
                soma = soma + matriz[i][j];
                cont = cont + 1;
            }

        }
    }
    if(opera == 'S')cout << soma << endl;
    if(opera == 'M')cout << soma/cont << endl;
}
