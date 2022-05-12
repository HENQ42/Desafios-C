#include <iostream>
 using namespace std;
int main(){
    int A, B, result;
    cout << "A deve ser entre 1 e 50, e B deve ser entre 51 e 100." << endl;
    cin >> A >> B;
    while( ((A <= 0 || A > 50) || B < 51) || B > 100){
        cout << "Valores invalidos!, digite novamente." << endl;
        cout << "A deve ser entre 1 e 50, e B deve ser entre 51 e 100." << endl;
        cin >> A >> B;
    }
    while(A <= B){
        result = result + A;
        A++;
        }
    cout << "Os valores sao: " << result << endl;
    return 0;
} 