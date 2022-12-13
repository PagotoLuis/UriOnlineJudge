#include <iostream>

using namespace std;

int main(){
    int valor, n=5,cont=0, cont2=0;
    int vetor_par[n];
    int vetor_impar[n];
        for(int i=0; i<15; i++){
        cin >> valor;
        if(valor%2  == 0){
            vetor_par[cont] = valor;
            cont = cont + 1;
            if(cont > 4){
                for(int i=0; i<n; i++){
                cout << "par[" << i << "] = " <<  vetor_par[i] << endl;
                cont = 0;
                }
            }
        }else{
            vetor_impar[cont2] = valor;
            cont2 = cont2 + 1;
            if(cont2 > 4){
                for(int i=0; i<n; i++){
                cout << "impar[" << i << "] = " <<  vetor_impar[i] << endl;
                cont2 = 0;
                }
            }
        }
    }
    for(int i=0; i< cont2; i++){
    cout << "impar[" << i << "] = " <<  vetor_impar[i] << endl;
    }
    for(int i=0; i< cont; i++){
    cout << "par[" << i << "] = " <<  vetor_par[i] << endl;
    }
}
