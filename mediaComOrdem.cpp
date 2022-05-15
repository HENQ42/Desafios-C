#include <iostream>
using namespace std;
int main(){
    float n1 = 0, n2 = 0, n3 = 0, n4 = 0, n = 0, c = 0, media;
    bool tru = true;
    while(tru){
        cin >> n;
        if(n < n1){
            if(n < n2){
                if(n < n3){
                    n4 = n;
                    n = 0;
                }else{
                    n4 = n3;
                    n3 = n;
                    n = 0;
                }
            }else{
                n4 = n3;
                n3 = n2;
                n2 = n;
                n = 0;
            }
        }else{
            n4 = n3;
            n3 = n2;
            n2 = n1;
            n1 = n;
            n = 0;
        }
        c++;
        if(c >= 4){
            tru = false;
        }
    }
     media = (((n1*1.0) + (n2*2.0) + (n3*3.0) + (n4*4.0)) / 10);
     if(media >= 10.0){
         cout << "Aprovado com Distincao e Louvor!" << endl;
     }else{
         if(media >= 9.0 && media <= 10.0){
             cout << "Aprovado com Louvor!" << endl;
         }else{
             if(media >= 6.0 && media <= 9.0){
                 cout << "Aprovado!" << endl;
             }else{
                 cout << "Reprovado!" << endl;
             }
         }
         
     }
     cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl << media << endl;
}