// Atividade 7 - 01.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <locale>
#include <stdio.h>

using namespace std;
 void hanoi(int n, char a, char b, char c)
{
	 /* mova n discos do pino a para o pino b usando
	    o pino c como intermediario                    */
	   if (n == 1)
		    printf("mova disco %d de %c para %c\n", n, a, b);
	   else
		   {
		     hanoi(n - 1, a, c, b);                            // H1
		     printf("mova disco %d de %c para %c\n", n, a, b);
		     hanoi(n - 1, c, b, a);                            // H2
		  }
	 }

 int main(void)
 {
	   int numDiscos;
	   cout << "Defina a quantidade de discos: ";
	   cin >> numDiscos;
	   hanoi(numDiscos, 'A', 'B', 'C');
	   system("pause");
	   return 0;
	   
	 }

