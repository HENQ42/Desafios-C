#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float vetorX[100];
    for(int i=0; i<=99; i++){
        cin >> vetorX[i];
    }
    for(int i=0; i<=99; i++){
        if(vetorX[i]<=10.0){
            cout << fixed << setprecision(1);
            cout << "A[" << i << "] = " << vetorX[i] << endl;
        }
    }
    return 0;
}