#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int vetorN[10], val;
    cin >> vetorN[0];
    for(int i=0; i<=9; i++){
        val = vetorN[0]*pow(2, i);
        cout << "N[" << i << "] = " << val << endl;
    }
    return 0;
}