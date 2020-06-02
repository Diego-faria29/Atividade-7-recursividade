#include <iostream>
#include <math.h>
#include <locale>
using namespace std;
//Utilizando recursividade crie uma função na qual receberá um parâmetro n que será um número inteiro e retornará uma lista decrescente de n até 0;
int listadecrescente(int x){
	if (x<=0){
		return(0);
	} else {
		cout << x << endl;
		return(listadecrescente(x-1));
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite o valor de n: " ;
    int n;
    cin >> n; 
    cout << "A lista resultante é: " << endl;
    cout << listadecrescente(n) << endl;
    system("pause");
}
