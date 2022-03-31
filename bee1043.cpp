#include <iostream>
#include <iomanip>
using namespace std;

int main(){
 double A, B, C, area, peri;
cin >> A >> B >> C;
 
if( A < (B + C) && B < (A + C) && C < (A + B) ){
     peri = A + B + C;
cout << fixed << setprecision(1);
cout << "Perimetro = " << peri << endl;
}else{
     area = ( (A + B) *C) / 2.0;
cout << fixed << setprecision(1);
cout << "Area = " << area << endl;    
 }
}