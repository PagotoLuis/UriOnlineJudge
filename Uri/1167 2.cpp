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
    while(n!=0){
        do{
            cout << "informe o numero de pessoas" << endl;
            cin >> n;
            if(n == 0)break;
        }while(n < 1 || n > 100);
        if(n == 0)break;
        for(y=0; y<n; y++){
            cout << "informe o nome: " << endl;
            cin >> aux.nome;
            do{
                cout << "Informe o numero" << endl;
                cin >> aux.num;
            }while(aux.num < 1 || aux.num > 500);
            lista.push_back(aux);
            if(y == 0)assis = aux.num;
        }
        cont = 0;
        cont2 = 0;
        flag = 0;
        while(cont <= assis){
            if(n - cont2 == 1)break;
            if(assis%2 == 0){
                for (y=1; y<n; ++y){
                    lista.push_back(aux);
                    lista.reverse();
                }
                flag=1;
                for(i=lista.begin(); i != lista.end(); i++){
                    cont = cont + 1;
                    if(cont > 1){
                        aux = *i;
                        cout << aux.nome << "( " << aux.num << "   0000000000 )" << endl;
                        if(cont > assis){
                            assis = aux.num;
                            cont2 = cont2 + 1;
                            cout << aux.nome << "( " << aux.num << "--------------- )" << endl;
                            i = lista.erase(i);
                            cout << aux.nome << "( " << aux.num << "++++++++++++++ )" << endl;
                            cont = 0;
                            break;
                        }
                    }
                }
            }else{
                if(flag == 1){
                    for (y=1; y<n; ++y){
                        lista.push_back(aux);
                        lista.reverse();
                    }
                }
                for(i=lista.begin(); i != lista.end(); i++){
                    cont = cont + 1;
                    if(cont > 1){
                        aux = *i;
                        cout << aux.nome << "( " << aux.num << "   0000000000 )" << endl;
                        if(cont > assis){
                            assis = aux.num;
                            cont2 = cont2 + 1;
                            cout << aux.nome << "( " << aux.num << "--------------- )" << endl;
                            i = lista.erase(i);
                            cout << aux.nome << "( " << aux.num << "++++++++++++++ )" << endl;
                            cont = 0;
                            break;
                        }
                    }
                }
            }
        }
        for(i=lista.begin(); i != lista.end(); i++){
            aux = *i;
            cout << aux.nome << "( " << aux.num << " )" << endl;
        }
    }
}
