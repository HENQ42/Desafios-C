#include <iostream>
 using namespace std;

int main(){
 int n0, n1, n2, d0, d1, d2;
cin >> n0 >> n1 >> n2;

if( n0 > n1 && n0 > n2 ){
  d2 = n0;
}if(n1 > n0 && n1 > n2){
  d2 = n1;
}if(n2 > n1 && n2 > n0){
  d2 = n2;
}
if(n0 < n1 && n0 < n2){
  d0 = n0;
}if(n1 < n0 && n1 < n2){
  d0 = n1;
}if(n2 < n1 && n2 < n0){
  d0 = n2;
}
if(( n0 > n1 && n0 < n2) || ( n0 < n1 && n0 > n2)) {
d1 = n0;
}if(( n1 > n0 && n1 < n2) || ( n1 < n0 && n1 > n2)) {
d1 = n1;
}if(( n2 > n1 && n2 < n0) || ( n2 < n1 && n2 > n0)) {
d1 = n2;
}

cout << d0 << endl << d1 << endl << d2 << endl;
cout << endl << n0 << endl << n1 << endl << n2 << endl;

 }