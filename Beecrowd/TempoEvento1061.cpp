#include <iostream>
 using namespace std;
int main(){
    int horaI, minI, sugI, horaO, minO, segI, segO, diaI, diaO, horas, minutos, segundos;
    string ignorar;
//////////// Recebimento dos dados. ////////////
    cin >> ignorar >> diaI;
    cin >> horaI >> ignorar >> minI >> ignorar >> segI;
    cin >> ignorar >> diaO;
    cin >> horaO >> ignorar >> minO >> ignorar >> segO;
    ignorar = " ";

//////////// processamento dos dados recebidos. ////////////
    if(horaI>=24){
        diaI++;
        horaI = (horaI-24);
    }if(horaO>=24){
        diaO++;
        horaO = (horaO-24);
    }
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
    

//////////// Se o tempo for menor que 1 minuto, o valor é alterado para 1 minuto. ////////////
    int teste = (diaO-diaI) + minutos + horas;
    if(!teste){
        minutos = 1;
        segundos = 0;
    }

//////////// Apresentação dos valores processados e retorno. ////////////
    cout << (diaO-diaI) << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl << minutos << " minuto(s)" << endl << segundos << " segundo(s)" << endl;
    return 0;
}