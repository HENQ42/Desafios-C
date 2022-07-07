#include <iostream>
 using namespace std;

int main(){

float a, b, c, n1, n2, n3;
 cin >> a >> b >> c;
if (a >= b and a >= c){
    n1 = a;
    if (b >= c){
        n2 = b;
        n3 = c;
    }
    else{
        n2 = c;
        n3 = b;
    }
}
if (b >= a and b >= c){
    n1 = b;
    if (a >= c){
        n2 = a;
        n3 = c;
    }
    else{
        n2 = c;
        n3 = a;
    }
}

if (c >= a and c >= b){
    n1 = c;
    if (a >= b){
        n2 = a;
        n3 = b;
    }else{
        n2 = b;
        n3 = a;            
    }
    }
if (a == b and b == c){
    n1=a;
    n2=b;
    n3=c;
}
a = n1;
b = n2;
c = n3;

if (a >= (b + c)){
    cout << "NAO FORMA TRIANGULO" << endl;
}else{
    if ((a*a) == ((b*b) + (c*c))){
        cout << "TRIANGULO RETANGULO" << endl;
    }
    if ((a*a) > (b*b + c*c)){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    if ((a*a) < (b*b + c*c)){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if ((a == b and b == c)){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    if ((a == b and a != c) || ((b == c) and c != a) || ((a == c) && a != b)){
        cout << "TRIANGULO ISOSCELES" << endl;
    }


}
}








/*#include <iostream>
     using namespace std;

 int main(){
    int A, B, C;
    int tmpA, tmpB, tmpC;
cin >> tmpA >> tmpB >> tmpC;

cout << "Original A: " << tmpA << " B: " << tmpB << " C: " << tmpC << endl; 

if( tmpC > tmpB || tmpC > tmpA ){ //Verifica se C é maior que A ou C.
    if(tmpC > tmpA){            //Verifica se C é maior que A
        A = tmpC;          //Envia o Valor recebido para a variavel A (Maior número).
        tmpC = tmpA;       //Troca o valor Recebido C com o valor recebido A.
        tmpA = A;          //Atualiza o Valor recebido com o valor da variavel A.
    }else{
        B = tmpC;
        tmpC = tmpB;
        tmpB = B;
    }
}else{
    C = tmpC;
}
if( tmpB > tmpA || tmpB < tmpC ){
    if(tmpB < tmpC){
        C = tmpB;
        tmpB = tmpC;
        tmpC = C;
    }else{
        A = tmpB;
        tmpB = tmpA;
        tmpA = A;
    }
}else{
    B = tmpB;
}
if( tmpA < tmpB || tmpA < tmpC ){
    if(tmpA < tmpC){
        C = tmpA;
        tmpA = tmpC;
        tmpC = C;
    }else{
        B = tmpA;
        tmpA = tmpB;
        tmpB = B;
    }
}else{
    A = tmpA;
}



cout << "A: " << A << " B: " << B << " C: " << C << endl; 


} */