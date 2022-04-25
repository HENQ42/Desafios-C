#include <iostream>
#include <iomanip>
#include <cmath>
 using namespace std;
int main(){
 float n1, n2, n3, n4, media;
 int opcao;
 string op;
cout << "Digite as 4 notas e a opcao (1 para Geometrica, 2 para Harmonica e 3 para Quadratica).\n";
cin >> n1 >> n2 >> n3 >> n4 >> opcao;
 switch (opcao){
     case (3):
     media = sqrt((n1*n1) + (n2*n2) + (n3*n3) + (n4*n4));
     op = "Quadratica";
     break;
     
     case (2):
     media = 4.0 / (1/n1 + 1/n2 + 1/n3 + 1/n4);
     op = "Harmonica";
     break;

     case (1):
     media = pow((n1 * n2 * n3 * n4), (1.0/4.0));
     op = "Geometrica";
     break;

     default:
     cout << "Escolha de Opcao Invalida!\n";
 }
cout << fixed << setprecision(2) << "Media " << op << " = " << media << endl;
return 0;
}