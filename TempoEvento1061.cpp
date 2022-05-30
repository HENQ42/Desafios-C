#include <iostream>
 using namespace std;
int main(){
    int horaI, minI, sugI, horaO, minO, segI, segO, diaI, diaO, horas, minutos, segundos;
    string ignorar;

    cin >> ignorar >> diaI;
    cin >> horaI >> ignorar >> minI >> ignorar >> segI;
    cin >> ignorar >> diaO;
    cin >> horaO >> ignorar >> minO >> ignorar >> segO;
    ignorar = "";

    if(horaI > horaO){
        horas = 24 - (horaI - horaO);
        diaI++;
    }else{
        horas = horaO - horaI;
    }
    if(segI > segO){
        segundos = 60 - (segI - segO);
    }else{
        segundos = segO - segI;
    }
    if(minI > minO){
        minutos = 60 - (minI - minO);
    }else{
        minutos = minO - minI;
    }

    cout << (diaO-diaI) << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl << minutos << " minuto(s)" << endl << segundos << " segundo(s)" << endl;
}