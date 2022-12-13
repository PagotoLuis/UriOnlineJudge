#include<iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(3);

    int vmedia, tempo;
    float gas=12, distancia, consumo;

    cin >> vmedia;
    cin >> tempo;

    distancia = tempo * vmedia;
    consumo = distancia / gas;

    cout << "" << consumo << endl;




}
