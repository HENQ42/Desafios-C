#include <iostream>
using namespace std;
int main(){
    int a[] = {1, 2, 3};
    int b[] = {5, 6, 7};
    int c[3];
    for(int i=0; i<=2; i++){
        c[i] = a[i] + b[i];
    }
    cout << "A = {" << a[0] << ", " << a[1] << ", " << a[2] << "}" << endl;
    cout << "B = {" << b[0] << ", " << b[1] << ", " << b[2] << "}" << endl;
    cout << "C = {" << c[0] << ", " << c[1] << ", " << c[2] << "}" << endl;
}