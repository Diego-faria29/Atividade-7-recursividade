#include <iostream>
#include <math.h>
#include <locale>
using namespace std;
//Quest�o: Utilizando recursividade crie uma fun��o na qual receber� um par�metro n
//que ser� um n�mero inteiro e retornar� uma lista decrescente de n at� 0 somente dos n�meros pares;
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
    cout << "A lista resultante �: " << endl;
    cout << listadecrescente(n) << endl;
    system("pause");
}
