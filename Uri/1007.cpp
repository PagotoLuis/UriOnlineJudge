#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(0);
    int a, b, abs;
    int MaiorAB;

    cin >> a;
    cin >> b;
    cin >> abs;

    MaiorAB = (a+b+abs*(a-b))/2;

    cout << MaiorAB << " eh o maior" << endl;


}
