#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

 double a, b, c, delta, x1, x2;
 
cin >> a >> b >> c;

 delta = (b*b) -4*(a * c);
 
 if(a == 0 or delta < 0){
	 
 cout << "Impossivel calcular" << endl;
 
 }
 else{
	 
  x1 = (-b + sqrt(delta)) / (2.0*a);
  x2 = (-b - sqrt(delta)) / (2.0*a);
  
  cout << fixed << setprecision(5);
  cout << "R1 = " << x1 << endl;
  cout << "R2 = " << x2 << endl;
  
 }
}