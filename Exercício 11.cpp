#include <stdio.h>
int main () {
	int l1,l2,l3;
	printf ("Ola, aqui analisaremos os lados do triangulo.\nInsira os valores dos lados aqui:\n");
	scanf ("%d%d%d", &l1, &l2, &l3);
	if ((l1 + l2 < l3) || (l1 + l3 < l2) || (l2 + l3 < l1))
		printf ("Os valores correspondentes nao sao capazes de formar um triangulo.");
	else if (l1 == l2 && l1 == l3 ) 
		printf ("Analisado os dados, a figura formanda trata-se de um triangulo equilatero.");
		else if (l1==l2 && l1!=l3 || l1==l3 && l1!=l2)
			printf ("Analisado os dados, a possivel figura formanda trata-se de um triangulo isoceles.");
			else if ((l1 != l2) && (l2 != l3))
			printf ("Analisado os dados, a possivel figura formanda trata-se de um triangulo escaleno.");
			else 
			printf ("A bonita tambem vai muito fundo ne, coloca numero pra fomar um triangulo ne, irmao.");
		
	
	return 0;
}
//Alterar o exerc�cio do tri�ngulo (exerc�cio 9), de forma que o algoritmo apresente no caso de tri�ngulo o seu tipo: equil�tero 
//(todos os lados s�o iguais), is�sceles (dois lados iguais) ou um outro tri�ngulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo (chinesinho) ao lado.
//A==B && A!=C || A==C && A!=B
