#include <iostream>
 using namespace std;

int main(){
 float nota0, nota1, media;
cin >> nota0 >> nota1;
 media = (nota0 + nota1) / 2;

if(media >= 9.0 && media <= 10.0){
    cout << "Media: " << media << ", Conceito: A, APROVADO!" << endl;
}if(media >= 7.5 && media <= 9.0){
    cout << "Media: " << media << ", Conceito: B, APROVADO!" << endl;
}if(media >= 6.0 && media <= 7.5){
    cout << "Media: " << media << ", Conceito: C, APROVADO!" << endl;
}if(media >= 4.0 && media <= 6.0){
    cout << "Media: " << media << ", Conceito: D, REPROVADO!" << endl;
}if(media < 4.0){
    cout << "Media: " << media << ", Conceito: E, REPROVADO!" << endl;
}
 }