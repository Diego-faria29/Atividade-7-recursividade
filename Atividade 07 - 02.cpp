#include <iostream>
using namespace std;
//Utilizando recursividade crie uma fun��o na qual receber� um par�metro n que ser� um n�mero inteiro e retornar� o somat�rio dos n�meros de 1 at� n;
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
