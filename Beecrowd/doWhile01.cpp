#include <iostream>
 using namespace std;
int main(){
    float idade, soma, nind;
    do{
        cin >> idade;
        soma = soma + idade;
        nind++;
    }while(idade != 0);
    cout << "Idade media: " << (soma/nind) << endl;
    return 0;
}