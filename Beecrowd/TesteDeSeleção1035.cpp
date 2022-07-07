#include <iostream>

int main(){

 int A, B, C, D, AB, CD;

std::cin >> A >> B >> C >> D;

 AB = A + B;
 CD = C + D;

 if(B > C and D > A and CD > AB and C >= 1 and D >= 1 and (A % 2 == 0) ){
     std::cout << "Valores aceitos" << std::endl;
 }else{
     std::cout << "Valores nao aceitos" << std::endl;
 }

}