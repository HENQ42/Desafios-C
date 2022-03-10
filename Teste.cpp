#include <iostream>
#include <iomanip>

 using namespace std;

int main(){
 int nFunci;
 double horasTrab, vPHora, resulSal;

cin >> nFunci >> horasTrab >> vPHora;

 resulSal = horasTrab * vPHora;

cout << fixed << setprecision(2);
cout << "NUMBER = " << nFunci << endl << "SALARY = U$ " << resulSal << endl;

}