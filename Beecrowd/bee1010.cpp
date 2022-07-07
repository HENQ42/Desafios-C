#include <iostream>
#include <iomanip>

 using namespace std;

int main(){
int cp1, np1, cp2, np2;
double vp1, vp2, vfp;

cin >> cp1 >> np1 >> vp1;
cin >> cp2 >> np2 >> vp2;
 
 vfp = (np1 * vp1) + (np2 * vp2);

cout << fixed << setprecision(2);
cout << "VALOR A PAGAR: R$ " << vfp << endl;

}