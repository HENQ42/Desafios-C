#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float n1, n2, media, ai;
    int func;
    cout << endl << "Digite a funcao; " << endl << "1: descobrir a nota necessaria ou 2: calcular media." << endl;
    cin >> func;
    cout << "Digite a nota da AI: ";
    cin >> ai;
    cout << endl << "Digite a N1: ";
    cin >> n1;
    if(func == 2){
        cout << endl << "Digite a N2: ";
        cin >> n2;
        media = (n1*0.4)+((n2*0.6)+ai);
        cout << fixed << setprecision(1);
        cout << endl << "Sua media e: " << media << endl;
        if(media >= 6){
            cout << "Aprovado!" << endl;
        }else{
            cout << "Reprovado!" << endl;
        }
    }else{
        n2 = ((6-(n1*0.4))/0.6)+ai;
        cout << fixed << setprecision(1);
        cout << "Voce precisa de: " << n2 << " ou mais para passar." << endl;
    }
    return 0;
}