#include <iostream>

using namespace std;

int main(){
    char cadena[200];
    int i = 0;
    int j;
    cout<< "\nIntroduce la cadena de texto que desees invertir\n";
    cin>> cadena;
    cout<< "\nLa cadena introducida es:\n"<<cadena<<endl;
    while(cadena[i] != '\0'){
        i++;
    }
    cout<< "\nLa cadena invertida es:\n";
    for(j = i-1; j >= 0; j--){
        cin>>cadena[j];
    }
    
    return 0;

}
