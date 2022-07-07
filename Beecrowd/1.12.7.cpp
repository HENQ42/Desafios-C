#include <iostream>
 using namespace std;
int main(){
 char turma = ' ', chamada = ' ';
 int numMat, matricula;
 bool whileTF = true;
 int AalunosP, AalunosA;
 int BalunosP, BalunosA;
 int CalunosP, CalunosA;
 int DalunosP, DalunosA;
 int EalunosP, EalunosA;
 int FalunosP, FalunosA;
 int GalunosP, GalunosA;
 int HalunosP, HalunosA;
 int IalunosP, IalunosA;
 int JalunosP, JalunosA;
 int KalunosP, KalunosA;
 int LalunosP, LalunosA;
 int MalunosP, MalunosA;
 int NalunosP, NalunosA;

 while(whileTF){
     cin >> turma >> numMat;
     if(turma = 'A'){
         for(int n = 0; n >= numMat; n++){
             cin >> matricula >> chamada;
             if(chamada = 'P'){
                 AalunosP = AalunosP + 1;
             }else{
                 AalunosA = AalunosA + 1;
             }
         }
     }
     if(turma = 'B'){
         for(int n = 0; n >= numMat; n++){
             cin >> matricula >> chamada;
             if(chamada = 'P'){
                 AalunosP = BalunosP + 1;
             }else{
                 AalunosA = BalunosA + 1;
             }
         }
     }
     if(turma = 'C'){
         for(int n = 0; n >= numMat; n++){
             cin >> matricula >> chamada;
             if(chamada = 'P'){
                 AalunosP = CalunosP + 1;
             }else{
                 AalunosA = CalunosA + 1;
             }
         }
     }
     if(turma = 'D'){
         for(int n = 0; n >= numMat; n++){
             cin >> matricula >> chamada;
             if(chamada = 'P'){
                 AalunosP = DalunosP + 1;
             }else{
                 AalunosA = DalunosA + 1;
             }
         }
     }
     if(turma = 'E'){
         for(int n = 0; n >= numMat; n++){
             cin >> matricula >> chamada;
             if(chamada = 'P'){
                 AalunosP = EalunosP + 1;
             }else{
                 AalunosA = EalunosA + 1;
             }
         }
     }
     if(turma = 'F'){
         for(int n = 0; n >= numMat; n++){
             cin >> matricula >> chamada;
             if(chamada = 'P'){
                 AalunosP = FalunosP + 1;
             }else{
                 AalunosA = FalunosA + 1;
             }
         }
     }
     if(turma = 'G'){
         for(int n = 0; n >= numMat; n++){
             cin >> matricula >> chamada;
             if(chamada = 'P'){
                 AalunosP = GalunosP + 1;
             }else{
                 AalunosA = GalunosA + 1;
             }
         }
     }
     if(turma = 'H'){
         for(int n = 0; n >= numMat; n++){
             cin >> matricula >> chamada;
             if(chamada = 'P'){
                 AalunosP = HalunosP + 1;
             }else{
                 AalunosA = HalunosA + 1;
             }
         }
     }
     if(turma = 'I'){
         for(int n = 0; n >= numMat; n++){
             cin >> matricula >> chamada;
             if(chamada = 'P'){
                 AalunosP = IalunosP + 1;
             }else{
                 AalunosA = IalunosA + 1;
             }
         }
     }
     if(turma = 'J'){
         for(int n = 0; n >= numMat; n++){
             cin >> matricula >> chamada;
             if(chamada = 'P'){
                 AalunosP = JalunosP + 1;
             }else
                 AalunosA = JalunosA + 1;
             }
         }
     }
     if(turma = 'K'){
         for(int n = 0; n >= numMat; n++){
             cin >> matricula >> chamada;
             if(chamada = 'P'){
                 AalunosP = KalunosP + 1;
             }else{
                 AalunosA = KalunosA + 1;
             }
         }
     }
     if(turma = 'L'){
         for(int n = 0; n >= numMat; n++){
             cin >> matricula >> chamada;
             if(chamada = 'P'){
                 AalunosP = LalunosP + 1;
             }else{
                 AalunosA = LalunosA + 1;
             }
         }
     }
     if(turma = 'M'){
         for(int n = 0; n >= numMat; n++){
             cin >> matricula >> chamada;
             if(chamada = 'P'){
                 AalunosP = MalunosP + 1;
             }else{
                 AalunosA = MalunosA + 1;
             }
         }
     }
     if(turma = 'N'){
         for(int n = 0; n >= numMat; n++){
             cin >> matricula >> chamada;
             if(chamada = 'P'){
                 AalunosP = NalunosP + 1;
             }else{
                 AalunosA = NalunosA + 1;
             }
         }
     }
     if(turma = 'O'){
         whileTF = false;
         cout << AalunosP;
         return 0;
     }
}