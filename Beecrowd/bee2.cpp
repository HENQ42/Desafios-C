#include <iostream>
#include <iomanip>

 using namespace std;

int main(){

 string nomeV;
 double salarioF, valF, vendas;

cin >> nomeV >> salarioF >> vendas;
 
 valF = salarioF + ((vendas / 100) * 15);

cout << fixed << setprecision(2);
cout << "TOTAL = R$ " << valF << endl;


}
