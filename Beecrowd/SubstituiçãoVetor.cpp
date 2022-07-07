#include <iostream>
using namespace std;
int main(){
    int vetorX[10];
    for(int i=0; i<=9; i++){
        cin >> vetorX[i];
        if(vetorX[i]<=0){
            vetorX[i] = 1;
        }
    }
    for(int i=0; i<=9; i++){
        cout << "X[" << i << "] = " << vetorX[i] << endl;
    }
    return 0;
}
/*

//testes
#include <iostream>
using namespace std;
int main(){
    int vetorX[2];
    for(int i=0; i<2; i++){
        cin >> vetorX[i];
        if(i==0){
            cout << "Codigo 00" << endl;
        }else{
            cout << "Codigo 01" << endl;
        }
        cout << "VetorX[" << i << "], Alterado." << endl;
    }
    cout << "Completo!" << endl;
    return 0;
}

//codigo erro
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
*/