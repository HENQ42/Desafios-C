#include <iostream>
#include <iomanip>
 using namespace std;
int main(){
    float F; 
    F = 32.0;
    while(F <= 52){
        cout << fixed << setprecision(2);
        cout << F << " graus Farenheit em Graus Centigrados e: " << ((5.0/9)*(F-32.0)) << endl;
        F++;
    }
return 0;
}