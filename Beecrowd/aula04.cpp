#include <iostream>
 using namespace std;
int main(){
int idade, soma, media, quant;
quant = 0;
soma = 0.0;
media = 0.0;
cout << "Digite a idade de uma pessoa\nOu 0 para encerrar.\n";
cin >> idade;
do{
quant++;
soma = soma + idade;
cin >> idade;
}while(idade > 0 and idade <= 100);
if(soma != 0){
    media = soma / quant;
    cout << "Media de idades: " << media << endl;
}
 }