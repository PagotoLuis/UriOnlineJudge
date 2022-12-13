#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(4);

    float x1,x2,y1,y2,p1,p2;
    float Distancia;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    Distancia = sqrt( pow( (x2 - x1), 2 ) + ( pow( (y2 - y1), 2 ) ) );

    cout <<""<< Distancia << endl;


}
