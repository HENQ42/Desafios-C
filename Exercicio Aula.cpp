#include <iostream>
#include <cmath>

 using namespace std;

int main(){
   double A, B, C, delta, x1, x2;

cin >> A >> B >> C;

    delta = (B*B) -4*(A * C);
    x1 = (-B + sqrt(delta)) / (2.0*A);
    x2 = (-B - sqrt(delta)) / (2.0*A);

   if(delta > 0.0){
       cout << "A equação possui mais de uma resposta!" << endl;
       cout << "X1: " << x1 << " X2: " << x2 << endl;
   }
   if(delta == 0.0){
       cout << "Delta possui apenas uma raiz real." << endl;
       cout << "X1: " << x1 << endl;
   }
   if(delta < 0.0){
       cout << "Delta não possui raizes reais." << endl;
   }
   cout << delta << endl << x1 << endl << x2 << endl;
}