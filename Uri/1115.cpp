#include <iostream>

using namespace std;

int main (){
    int X, Y, A, B, C, D;
    cin >> X >> Y;
    do{
    if((X > 0)&&(Y > 0)){

        A = 0;
    }
    if((X < 0)&&(Y > 0)){

        A = 0;
        }
    if((X < 0)&&(Y < 0)){

        A = 0;

            }
    if((X < 0)&&(Y > 0)){

        A = 0;

                }

    }while((X != 0)||(Y != 0));
    switch (A)
       {
       	case 1:
        cout << "primeiro" <<endl;
       	      break;
       	case 2:
        cout << "segundo" <<endl;
       		break;
       	case 3:
        cout << "terceiro" <<endl;
       		break;
       	case 4:
        cout << "quarto" <<endl;
       		break;
        }
   return(0);
 }

