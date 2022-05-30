#include <iostream>
using namespace std;
int main(){
    int habA, habB, anos=0;
    cout << "Insira o numero de habitantes da cidade A, deve ser maior q 2.5M." << endl;
    cin >> habA;
    if(habA<2500000){
        cout << "Digite outro valor." << endl;
        while(habA<2500000){
            cin >> habA;
        }
    }
    cout << "Insira o numero de habitantes da cidade B." << endl;
    cin >> habB;
    while(habA <= habB){
        habA = habA + ((habA/100)*3);
        habB = habB + ((habB/100)*1.5);
        anos++;
    }
    cout << "O numero de anos necessarios para o pais B ultrapassar ou igualar B sao: " << anos << endl;
}