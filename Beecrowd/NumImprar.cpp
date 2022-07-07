#include <iostream>
using namespace std;
int main(){
     int impar=0, num=0;
     while(!(num > 0 && num < 1000)){
         cin >> num;
     }
     while(impar < num){
         impar++;
         if(!(impar%2==0)){
             cout << impar << endl;
         }
     }
}