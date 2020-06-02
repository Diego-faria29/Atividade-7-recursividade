#include <iostream>
#include <math.h>
#include <locale>
using namespace std;
//Utilizando recursividade crie uma função na qual receberá um parâmetro n e calcule a soma dos primeiros n cubos: S(n) = 13 + 23 + 33 + ... + n3;
int ncubos(int x){
	if (x<=0){
		return(0);
	} else {
		return(ncubos(x-1)+pow(x,3));
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite o valor de n:" ;
    int n;
    cin >> n;
    cout << ncubos(n) << endl;
    system("pause");
}
