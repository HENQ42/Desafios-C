#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float altura[15], menorAltura=0, alturaMedia=0;
    int nGrupo=0;
    cin >> altura[0];
    menorAltura = altura[0];
    for(int cont = 1; cont <= 14; cont++){
        cin >> altura[cont];
        if(altura[cont] < menorAltura){
            menorAltura = altura[cont];
            nGrupo = cont;
        }
        alturaMedia = alturaMedia + altura[cont];
    }
    alturaMedia = alturaMedia/15;
    cout << "Menor Altura do grupo foi de: " << menorAltura << ", Na posicao: " << nGrupo << endl;
    cout << fixed << setprecision(2);
    cout << "Altura media: " << alturaMedia << endl;
}

