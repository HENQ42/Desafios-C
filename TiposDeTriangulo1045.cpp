#include <iostream>
#include <iomanip>
     using namespace std;

 int main(){
    int A, B, C, tmpA, tmpB, tmpC;
cin >> tmpA >> tmpB >> tmpC;

cout << "Original A: " << tmpA << " B: " << tmpB << " C: " << tmpC << endl; 

if (tmpC > tmpB){
    if(tmpC > tmpA){
        A = tmpC;
        tmpC = tmpA;
        tmpA = A;
    }else{
        B = tmpC;
        tmpC = tmpB;
        tmpB = B;
    }
}else{
    C = tmpC;
    tmpC = C;
}
if( (tmpB > tmpA) || (tmpB < tmpC)){
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
    tmpB = B;
}
if( (tmpA < tmpB) || (tmpA < tmpC) ){
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
    tmpA = A;
}

//cout << fixed << setprecision(2);
cout << "A: " << A << " B: " << B << " C: " << C << endl; 


}