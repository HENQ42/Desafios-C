#include <iostream>
 using namespace std;
int main(){
    float valor=0.0;
    int nInt=0;
    for(int c=0; c <= 5; c++){
        cin >> valor;
        if(valor >= 1.0){
            nInt++;
        }else{
            valor = 0;
        }
    }
    cout << nInt << " valores positivos" << endl;
}