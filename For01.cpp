#include <iostream>
 using namespace std;
int main(){

    for(float F = 32; F <= 52; F++){
        float C = ( ( 5.0 / 9.0 ) * ( F - 32.0) );
        cout << C << endl;
    }
    return 0;
}