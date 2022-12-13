#include<iostream>

using namespace std;

int main()
{
    int N,N100,N50,N20,N10,N5,N2,N1;

    cin >> N;

    N100 = N/100;
    N50 = (N-N100 *100)/50;
    N20 = (N-N100 *100-N50 *50)/20;
    N10 = (N-N100 *100-N50*50-N20*20)/10;
    N5 = (N-N100 *100-N50*50-N20*20-N10*10)/5;
    N2 = (N-N100 *100-N50*50-N20*20-N10*10-N5*5)/2;
    N1 = N-N100*100-N50*50-N20*20-N10*10-N5*5-N2*2;

    cout << N << "" << endl;
    cout << N100 << " nota(s) de R$ 100,00" << endl;
    cout << N50 << " nota(s) de R$ 50,00" << endl;
    cout << N20 << " nota(s) de R$ 20,00" << endl;
    cout << N10 << " nota(s) de R$ 10,00" << endl;
    cout << N5 << " nota(s) de R$ 5,00" << endl;
    cout << N2 << " nota(s) de R$ 2,00" << endl;
    cout << N1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}
