#include <iostream>
#include <iomanip>

 using namespace std;

int main(){
 int seg, horas, minutos, temp, resto;
temp = 11700;

horas = temp / (60*60);
resto = temp % (60*60);
minutos = resto / 60;
resto = resto % 60;
seg = resto;

cout << horas << endl << minutos << endl << seg << endl << resto << endl;
}