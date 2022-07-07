#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 double cod, quant, total;
cin >> cod >> quant;
 
 if(cod == 1){
    total = quant * 4.00;
     cout << fixed << setprecision(2);
     cout << "Total: R$ " << total << endl;
 }
 if(cod == 2){
    total = quant * 4.50; 
     cout << fixed << setprecision(2);
     cout << "Total: R$ " << total << endl;
 }
 if(cod == 3){
    total = quant * 5.00; 
     cout << fixed << setprecision(2);
     cout << "Total: R$ " << total << endl;
 }
 if(cod == 4){
    total = quant * 2.00;
     cout << fixed << setprecision(2);
     cout << "Total: R$ " << total << endl;
 }
 if(cod == 5){
    total = quant * 1.50;
     cout << fixed << setprecision(2);
     cout << "Total: R$ " << total << endl;
 }
 
 
    return 0;
}