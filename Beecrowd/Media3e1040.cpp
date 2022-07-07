#include <iostream>
#include <iomanip>

 using namespace std;
 
int main(){
	float n1, n2, n3, n4, nE, m, mF;
	
cin >> n1 >> n2 >> n3 >> n4 >> nE;
	
 m = (((n1*2.0) + (n2*3.0) + (n3*4.0) + (n4*1.0)) / 10);
	
	if(m >= 7.0){
		cout << fixed << setprecision(1);
		cout << "Media: " << m << endl;
		cout << "Aluno aprovado." << endl;
	}	
	if(m < 5.0){
		cout << fixed << setprecision(1);
		cout << "Media: " << m << endl;
		cout << "Aluno reprovado." << endl;
	}
	if(m >= 5.0 and m < 7.0){
		cout << fixed << setprecision(1);
		cout << "Media: " << m << endl;
		cout << "Aluno em exame." << endl;
		mF = (nE + m) / 2;
		cout << fixed << setprecision(1);
		cout << "Nota do exame: " << nE << endl;
		if(mF >= 5.0){
			cout << "Aluno aprovado." << endl;
		}else{
			cout << "aluno reprovado." << endl;
		}
		cout << fixed << setprecision(1);
		cout << "Media final: " << mF << endl;
	}
	
	
	return 0;
}