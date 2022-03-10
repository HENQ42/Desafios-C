#include <iostream>
#include <iomanip>
#define kml 12

 using namespace std;

int main(){
 
 double temp, kmh, litros;

cin >> temp >> kmh;

 litros = (temp * kmh) / kml;

cout << fixed << setprecision(3);
cout << litros << endl;

}