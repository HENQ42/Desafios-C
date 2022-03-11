#include <iostream>
#include <cmath>

int main(){

 int not100, not50, not20, not10, not5, not2, mod1, mod050, mod025, mod010, mod005, mod001, res;
 double res1;

std::cin >> res1;

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

res1 = res1 + res;

res1 = res1 * 100;

    mod1 = res1 / 100;
     res1 = res1 - (mod1 * 100);
    mod050 = res1 / 50;
     res1 = res1 - (mod050 * 50);
    mod025 = res1 / 25;
     res1 = res1 - (mod025 * 25);
    mod010 = res1 / 10;
     res1 = res1 - (mod010 * 10);
    mod005 = res1 / 5;
     res1 = res1 - (mod005 * 5);

    mod001 = round(res1);

std::cout << "NOTAS:" << std::endl;
std::cout << not100 << " nota(s) de R$ 100.00" << std::endl;
std::cout << not50 << " nota(s) de R$ 50.00" << std::endl;
std::cout << not20 << " nota(s) de R$ 20.00" << std::endl;
std::cout << not10 << " nota(s) de R$ 10.00" << std::endl;
std::cout << not5 << " nota(s) de R$ 5.00" << std::endl;
std::cout << not2 << " nota(s) de R$ 2.00" << std::endl;
std::cout << "MOEDAS:" << std::endl;
std::cout << mod1 << " moeda(s) de R$ 1.00" << std::endl;
std::cout << mod050 << " moeda(s) de R$ 0.50" << std::endl;
std::cout << mod025 << " moeda(s) de R$ 0.25" << std::endl;
std::cout << mod010 << " moeda(s) de R$ 0.10" << std::endl;
std::cout << mod005 << " moeda(s) de R$ 0.05" << std::endl;
std::cout << mod001 << " moeda(s) de R$ 0.01" << std::endl;                       
}