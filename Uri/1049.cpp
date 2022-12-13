#include <iostream>

using namespace std;
void vertebrado(){
    string a, b;
    if(a == "ave"){
        cin >> b;
        if(b == "carnivoro")cout << "aguia" << endl;
        if(b == "onivoro")cout << "pomba" << endl;
    }else{
        cin >> b;
        if(b == "onivoro")cout << "homem" << endl;
        if(b == "herbivoro")cout << "vaca" << endl;
    }

}
void invertebrado(){
    string a, b;
    if(a == "inseto"){
        cin >> b;
        if(b == "hematogo")cout << "pulga" << endl;
        if(b == "herbivoro")cout << "lagarta" << endl;
    }else{
        cin >> b;
        if(b == "hematofogo")cout << "sanguessuga" << endl;
        if(b == "onivoro")cout << "minhoca" << endl;
    }

}

int main(){
    string a, b;
    cin >> a;
    if(a == "vertebrado")vertebrado();
    if(a == "invertebrado")invertebrado();
}
