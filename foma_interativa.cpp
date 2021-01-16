#include <iostream>
#include <stdlib.h>
#include "conio.h"

using namespace std;

int sumaInterativaNum(int n){
    int suma = 0;
    while(n>0){
        suma+=(n%10);
        n/=10;
    }
    return (suma);
}

int main(){
    int num;
    cout<< "\nIngrese la cantidad a sumar\n";
    cin>> num;

    cout<<"\n La suma de la cantidad ingresada es:\n"<<sumaInterativaNum(num);

    getch();
}