#include <iostream>

 using namespace std;
 
int main(){

   float x, y;

cin >> x >> y;

   if(x == 0.0 or y == 0.0){
	   if(x == 0.0 and y == 0.0){
	cout << "Origem" << endl;
}else{
	   if(x == 0.0 and y != 0.0){
		   cout << "Eixo Y" << endl;
	   }else{
		   cout << "Eixo X" << endl;
	   }
   }
}else{
if(x > 0.0 and y > 0.0){
	cout << "Q1" << endl;
}
if(x < 0.0 and y > 0.0){
	cout << "Q2" << endl;
}
if(x < 0.0 and y < 0.0){
	cout << "Q3" << endl;
}
if(x > 0.0 and y < 0.0){
	cout << "Q4" << endl;
   }
  }   
	return 0;
}