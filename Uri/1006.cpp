#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(0);
    int A, B, C, D;
    int dif;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    dif = (A*B - C*D);

    cout << "DIFERENCA = " << dif << endl;


}
