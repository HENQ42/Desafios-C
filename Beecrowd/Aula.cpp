#include <iostream>
 using namespace std;
int main(){
 float h, pideal;
 string pessoa, aux;
 char sexo;
cout << "\nDigite o nome da pessoa:\n";
getline(cin, pessoa);
cout << "\nDigite o sexo:\n";
cout << "M para masculino ou F para Feminino\n";
cin >> sexo;
cout << "\nDigite a altura em metros:\n";
cin >> h;

switch(sexo){
 case 'M':
     pideal = (72.7 * h) - 58.0; aux = "masculino"; 
     break;
 case 'F':
     pideal = (62.1 * h) - 44.7; aux = "feminino"; 
     break;
 default:
     cout << "Escolha de sexo invalida.\n";
     pideal = 0.0;
     break;
}
if( pideal != 0.0){
    cout << pessoa << " e do sexo " << aux;
    cout << " e seu peso ideal e " << pideal << " Kg.\n";
}
return 0;
}