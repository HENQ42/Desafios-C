#include <iostream>
using namespace std;

int main(){
    int base, expoente, contador, soma;
    cout << "Insira a base: ";
    cin >> expoente;
    cout << endl << "Insira o Expoente: ";
    cin >> base;
    cout << endl << base << "^" << expoente << " = ";
    soma = base;
    for(contador=1; contador<expoente; contador++){
        soma = soma*base;
    }
    cout << soma << endl;
}