#include <iostream>
 using namespace std;

int main(){
 int hi, hf, hr;
cin >> hi >> hf;

if(hi == hf){
    hr = 24;
}else{
    if(hi > 12 && hf > 12){
        hr = hf - hi;
    }else{
        if(hi < 12 && hf > 12){
            hr = hf - hi;
        }else{
            if(hi > 12 && hf < 12){
                hr = (hf + 12) - (hi - 12);
            }else{
                if(hi < 12 && hf < 12){
                     hr = hf - hi;
                }
            }
        }
    }
}
cout << "O JOGO DUROU " << hr << " HORA(S)" << endl;
}

