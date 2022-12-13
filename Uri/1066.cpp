#include <iostream>

using namespace std;

int main (){
    int n1, n2, n3, n4, n5, negativo=0, positivo=0, par=0, inpar=0;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    cin >> n5;
//VALORES_NEGATIVOS__________________________________________
    if(n1 < 0){
        negativo = negativo + 1;
    }if(n2 < 0){
        negativo = negativo + 1;
    }if(n3 < 0){
        negativo = negativo + 1;
    }if(n4 < 0){
        negativo = negativo + 1;
    }if(n5 < 0){
        negativo = negativo + 1;
    }
//VALORES_POSITIVOS__________________________________________
    if(n1 > 0){
        positivo = positivo + 1;
    }if(n2 > 0){
        positivo = positivo + 1;
    }if(n3 > 0){
        positivo = positivo + 1;
    }if(n4 > 0){
        positivo = positivo + 1;
    }if(n5 > 0){
        positivo = positivo + 1;
    }
 //VALORES_PARES_e_IMPARES__________________________________________
    if(n1%2 == 0){
        par = par + 1;
    }else{
        inpar = inpar + 1;
    }
    if(n2%2 == 0){
        par = par + 1;
    }else{
        inpar = inpar + 1;
    }
    if(n3%2 == 0){
        par = par + 1;
    }else{
        inpar = inpar + 1;
    }
    if(n4%2 == 0){
        par = par + 1;
    }else{
        inpar = inpar + 1;
    }
    if(n5%2 == 0){
        par = par + 1;
    }else{
        inpar = inpar + 1;
    }
    cout << par << " valor(es) par(es)" << endl;
    cout << inpar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;
}
