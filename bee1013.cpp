#include <iostream>
 using namespace std;


int main(){
 int a, b, c, maiorAb, maiorAbC;

cin >> a >> b >> c;

 maiorAb = (a+b+abs(b-a)) / 2;
 maiorAbC = (maiorAb+c+abs(c-maiorAb)) / 2;

cout << maiorAbC << " eh o maior" << endl;
}