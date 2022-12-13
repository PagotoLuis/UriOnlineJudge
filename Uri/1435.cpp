#include <iostream>

using namespace std;

int main(){
    int N=1, f=0;
    while(N){
        cin >> N;
        int num = 1, inicio = 0, fim = N, i, j;
        int M[N][N];
        for(i = 0;i < (int)((N + 1)/2) ;i++){
            for(j = inicio;j < fim;j++){
                M[j][inicio] = num;
                M[inicio][j] = num;
                M[j][fim-1] = num;
                M[fim-1][j] = num;
            }
            num++;
            inicio++;
            fim--;
        }
        for(i = 0;i < N;i++){

            for(j = 0;j < N;j++){
                cout << M[i][j];
                if(j != N-1)cout << "   ";
                if(j == N-1)cout << endl;
            }
            cout << endl;
        }
    }
    return 0;
}
