#include <iostream>
#include <stack>

using namespace std;



int main(){
    int n, k, cont, aux, flag;
    stack<int>pilha;
    while(n != 0){
        flag = 0;
        cout << "Informe a quantiedade de vagoes: " << endl;
        do{
            cin >> n;
        }while(n < 0 || n > 1000);
        aux = 1;
        cout << "Informe a ordem: "<< endl;
        while(aux != 0){
            cont = 1;
            for(k=0; k<n; k++){
                cin >> aux;
                if(aux == 0){
                    flag = 1;
                    break;
                }
                if(aux == cont){
                    if(pilha.empty()){
                        cout << "aaaaaaaaaaaaaaaa" << endl;
                        cont = cont + 1;
                    }else{
                        if(aux == cont || pilha.top() == aux){
                            cout << "vvvvvvvvvvvvvvvvv" << endl;
                            cont = cont + 1;
                        }
                    }
                }else{
                        cout << "bbbbbbbbbbbbbbbbbbbbbbbbbb" << endl;
                        pilha.push(aux);
                }
            }
            if(flag == 0){
                while(cont <= n){
                    if(pilha.top() == cont){
                        cout << "ccccccccccccccccccccccccccccc" << endl;
                        pilha.pop();
                        cont = cont + 1;
                    }else{
                        break;
                    }
                }
                if(cont == n+1){
                    cout << "yes" << endl;
                }else{
                    cout << "no" << endl;
                }
            }
        }
    }
}
