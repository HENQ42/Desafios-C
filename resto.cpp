#include <iostream>
#include <iomanip>
 using namespace std;

int main(){
    int resto, Valdiv, div, a;
    cin >> a >> div;
    resto = a % div;
    Valdiv = a / div;
    cout << "Divisao de: " << a << ", Por: " << div <<  ". Divisao e: " << Valdiv << ", e resto e: " << resto << endl;
}