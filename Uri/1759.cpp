#include <iostream>

using namespace std;

int main(){
    int casos, i;
    cin >> casos;
    if(casos >=0 && casos <= 10*10*10*10*10*10){
        for(i=0; i<casos-1; i++){
            cout << "Ho" << " ";
        }
        cout << "Ho!" << endl;
    }

}
