#include <iostream>
 using namespace std;
int main(){
    float soma, idade, nind;
    do{
        while(idade <= 0 || idade > 100){
            cout << "Idade deve ser entre 1 e 100!\nTente Novamente.\n";
            cin >> idade;
        }
        cin >> idade;
        soma = soma + idade;
        nind++;
    }while(idade != 0);
    cout << "Media de idades e: " << (soma/nind) << endl;
    return 0;
}