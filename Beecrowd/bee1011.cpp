#include <iostream>
#include <iomanip>

#define PI 3.14159 
                           // usar (4/3.0) ou (4.0/3), pois algumas linguagens assumem que o resultado da divisão entre dois inteiros é outro inteiro.

 using namespace std;

int main(){
 double r, vol;

cin >> r;

 vol = ((4/3.0) * PI * (r * r * r));

cout << fixed << setprecision(3);
cout << "VOLUME = " << vol << endl;
}