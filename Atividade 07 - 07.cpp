#include <iostream>
#include <math.h>
#include <locale>
using namespace std;
// Utilizando recursividade crie uma fun��o na qual receber� dois par�metros n1 e n2. n1 dever� receber o valor inicial e n2 o valor final,
//a fun��o dever� retornar a lista dos n�meros pares que est�o entre esses 2 n�meros;
int listarn(int x, int y){
	if (x>y){
		cout << "N1 � maior que N2" << endl;
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
    cout << "A lista resultante �: " << endl;
    listarn(n1, n2);
    system("pause");
}
