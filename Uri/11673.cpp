#include <iostream>
#include <list>

using namespace std;

struct reg{
    string nome;
    int num;

};



int main(){
    int n, y, assis;
    int cont, cont2, flag;
    string nome;
    list<reg> lista;
    list<reg>::iterator i;
    reg aux;
        do{
            cout << "informe o numero de pessoas" << endl;
            cin >> n;
            if(n == 0)break;
        }while(n < 1 || n > 100);
        for(y=0; y<n; y++){
            cout << "informe o nome: " << endl;
            cin >> aux.nome;
            do{
                cout << "Informe o numero" << endl;
                cin >> aux.num;
            }while(aux.num < 1 || aux.num > 500);
            lista.push_back(aux);
        }
    for(i=lista.begin(); i != lista.end(); i++){
        cout << aux.nome << "  " << aux.num << endl;
    }
    for(i=lista.begin(); i != lista.end(); i++){
            lista.reverse();
    }

}
