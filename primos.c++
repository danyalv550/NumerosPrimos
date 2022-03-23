#include <iostream>

using namespace std;

int main(){
    int a,b,c,numero;
    bool primo;
    cout << "Escriba hasta que numero mostrar los primos: ";
    cin >> numero;
    while(numero <=1){
        cout << "Escriba un numero mayor que 1: ";
        cin >> numero;
    }
    for(a = 2; a <= numero; a++){
        primo=true;
        for(b = 3; b < a - 1; b++){
            if(a % b == 0){
                primo=false;
                break;
            }
        }
        if(primo==true){
            cout << a << " ";
        }
    }
}