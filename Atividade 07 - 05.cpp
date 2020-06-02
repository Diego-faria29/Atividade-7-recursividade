#include <iostream>
#include <math.h>
#include <locale>
using namespace std;
//Questão: Utilizando recursividade crie uma função na qual receberá um parâmetro n
//que será um número inteiro e retornará uma lista decrescente de n até 0 somente dos números pares;
int listadecrescente(int x){
	if (x<=0){
		return(0);
	} else {
		if (x%2 == 0){
			cout << x << endl;
		}
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
