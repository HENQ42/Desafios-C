#include <iostream>
 using namespace std;

 int main(){
float soma, media;
int quant, idade;
quant = 0;
soma = 0.0;
media = 0.0;
cout << "Digite a idade de uma pessoa\nOu 0 para encerrar.\n";
cin >> idade;

while(idade > 0){
      soma = soma + idade;
      quant++;
      cin >> idade;
}
if(soma != 0){
  media = soma / quant;
  cout << "Media de idades: " << media << endl;
}
return 0;
 }