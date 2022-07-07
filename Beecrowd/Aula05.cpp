#include <iostream>
 using namespace std;

int main(){
    int idade, soma, media, quant;
    soma = 0;
    quant = 0;
    do{
        do{
            cout << "Digite 0 para encerrar,\nOu digite idade.\n"
            cin >> idade;
        }while(idade < 0 || idade > 100);
        quant++;
        soma = soma + idade;
    }while(idade > 0 && idade <= 100 );
    media = soma / (quant-1);
    cout << " Idade Media: " << media << endl;
    return 0;
}