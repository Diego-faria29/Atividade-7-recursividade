#include <iostream>
#include <math.h>
#include <locale>
using namespace std;
// Utilizando recursividade crie uma função na qual receberá dois parâmetros n1 e n2. n1 deverá receber o valor inicial e n2 o valor final,
//a função deverá retornar a lista dos números pares que estão entre esses 2 números;
int listarn(int x, int y){
	if (x>y){
		cout << "N1 é maior que N2" << endl;
		return (0);
	}else if (y==x){
		cout << x << endl;
		return(0);
	} else {
		if (x%2 == 0){
			cout << x << endl;
		}
		return(listarn(x+1, y));
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    cout << "Digite o Valor de N1: ";
	cin >> n1;
	cout << "Digite o Valor de N2: ";
	cin >> n2;
    cout << "A lista resultante é: " << endl;
    listarn(n1, n2);
    system("pause");
}
