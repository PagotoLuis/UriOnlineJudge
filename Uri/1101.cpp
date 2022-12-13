#include <iostream>


using namespace std;

int main(){
        int N, M, soma, i;
    do{
        cin >> M >> N;
        if((N <= 0)||(M <= 0)){
                break;
        }
        if(M > N){
            soma = 0;
            for(i; N <= M; i){
                cout << N <<" ";
                soma = soma + N;
                N = N + 1;

        }
        cout << "Sum="<<soma<< endl;

        }else{
            soma = 0;
            for(i; M <= N; i){
                cout << M <<" ";
                soma = soma + M;
                M = M + 1;

        }
        cout << "Sum="<<soma<< endl;

        }

    }while(( M >= 0)||(N >= 0));

}

