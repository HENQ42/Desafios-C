#include <iostream>

 using namespace std;

int main(){

 double not100, not50, not20, not10, not5, not2, mod1, mod050, mod025, mod010, mod005, mod001, res1;
 int res;

cin >> res1;

 res = res1;
 res1 = res1 - res;

    not100 = res / 100;
        res = res % 100;
    not50 = res / 50;
        res = res % 50;
    not20 = res / 20;
        res = res % 20;
    not10 = res / 10;
        res = res % 10;
    not5 = res / 5;
        res = res % 5;
    not2 = res / 2;
        res = res % 2;

cout << "NOTAS:" << endl;
cout << not100 << " nota(s) de R$ 100.00" << endl;
cout << not50 << " nota(s) de R$ 50.00" << endl;
cout << not20 << " nota(s) de R$20.00" << endl;
cout << not10 << " nota(s) de R$10.00" << endl;
cout << not5 << " nota(s) de R$5.00" << endl;
cout << not2 << " nota(s) de R$2.00" << endl;
cout << "MOEDAS:" << endl;
cout << mod1 << " moeda(s) de R$ 1.00" << endl;
cout << mod050 << " moeda(s) de R$ 0.50" << endl;
cout << mod025 << " moeda(s) de R$ 0.25" << endl;
cout << mod010 << " moeda(s) de R$ 0.10" << endl;
cout << mod005 << " moeda(s) de R$ 0.05" << endl;
cout << mod001 << " moeda(s) de R$ 0.01" << endl;
                                
}