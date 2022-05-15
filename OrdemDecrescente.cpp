#include <iostream>
 using namespace std;

int main (){

    float n, n1=0, n2=0, n3=0, n4=0;
    int contagem = 0;
    bool decisao = true;

    while(decisao){
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
        contagem++;
        if(contagem >= 4){
            decisao = false;
        }
    }
return 0;
}