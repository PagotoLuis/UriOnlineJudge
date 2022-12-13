#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    while(scanf("%d", &n) != EOF){
        if(n==0)cout << "vai ter copa!" << endl;
        if(n>0)cout << "vai ter duas!" << endl;
        cin >> n;
    }
}
