#include <iostream>
     using namespace std;

 int main(){
    int A, B, C, tmpA, tmpB, tmpC;
cin >> tmpA >> tmpB >> tmpC;

cout << "Original A: " << tmpA << " B: " << tmpB << " C: " << tmpC << endl; 

if( (tmpC > tmpB) || (tmpC > tmpA) ){ //Verifica se C é maior que A ou C.
    if(tmpC > tmpA){            //Verifica se C é maior que A
        A = tmpC;          //Envia o Valor recebido para a variavel A (Maior número).
        tmpC = tmpA;       //Troca o valor Recebido C com o valor recebido A.
        tmpA = A;          //Atualiza o Valor recebido com o valor da variavel A.
    }else{
        C = tmpC;       //Se nada for verdadeiro, Variavel C recebe valor recebido C.
    }
}
if( (tmpB > tmpA) || (tmpB < tmpC) ){
    if(tmpB < tmpC){
        C = tmpB;
        tmpB = tmpC;
        tmpC = C;
    }else{
        B = tmpB;
    }

}
if( (tmpA > B) && (tmpA > C) ){
    A = tmpA;
}else{
    cout << "Erro Variavel A" << endl;
}

cout << "A: " << A << " B: " << B << " C: " << C << endl; 


}