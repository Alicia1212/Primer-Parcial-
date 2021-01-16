#include <iostream>
#include <stdlib.h>
#include "conio.h"

using namespace std;

int sumaRecursivaNum(int n){
    if(n == 0)
     return 0;
    else
     return ((n%10) + sumaRecursivaNum(n/10));

}

int main(){
    int num;
    cout<< "\nIngrese la cantidad a sumar\n";
    cin>> num;

    cout<<"\n La suma de la cantidad ingresada es:\n"<<sumaRecursivaNum(num);

    getch();
}