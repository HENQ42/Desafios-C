#include <iostream>
using namespace std;
int main(){
    int vetor[10], cont=0;
    while(cont<=10){
        cin >> vetor[cont];
        if(vetor[cont]<=0){
            vetor[cont] = 1;
            cont++;
        }
        for(cont=0; cont<=10; cont++){
            cout << "X[" << cont << "] = " << vetor[cont] << endl;
        }
    }
    return 0;
}