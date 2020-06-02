#include <iostream>
using namespace std;
//Utilizando recursividade crie uma função na qual receberá um parâmetro n que será um número inteiro e retornará o somatório dos números de 1 até n;
int somatorio(int x){
	if (x<=0){
		return(0);
	} else {
		return(somatorio(x-1)+x);
	}
}

int main() {
	cout << "Digite o valor de n: " ;
    int n;
    cin >> n;
    cout << somatorio(n) << endl;
    system("pause");
}
