#include <iostream>
using namespace std;

int main(){
int x, res, y;
bool enc;
enc = true;

while(enc){
if(x == 123456){
enc = false;
}else{
cin >> x >> y;
res = x%y;
cout << "O valor e: " << res << endl;
}
}
}
