#include <iostream>

using namespace std;

int main(){
    int GGREMIO, GINTER, numero;
    int gremio, inter, empate, soma;
    gremio = 0;
    inter = 0;
    empate = 0;
    soma = 0;
    do{
        cin >> GGREMIO >> GINTER;
        if(GGREMIO < GINTER){;
            gremio = gremio + 1;
            soma = soma + 1;
            }else if(GGREMIO > GINTER){
                inter = inter + 1;
                soma = soma + 1;
            }else{
                empate = empate + 1;
                soma = soma + 1;
            }
       cout << "Novo grenal (1-sim 2-nao)" << endl;
       cin  >> numero;
    }while(numero != 2);
    cout << soma << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empate << endl;
    if(gremio < inter){
      cout << "Inter venceu mais" << endl;
    }else{
        if(inter < gremio){
      cout << "Gremio venceu mais" << endl;
        }else{
      cout << "Empate" << endl;
        }

    }
}


