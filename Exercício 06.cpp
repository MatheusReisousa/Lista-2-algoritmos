#include <stdio.h>
#include <math.h>
int main () {
	int numero;
	double  resultado;
	
	printf ("Insira aqui o valor a ser analisado: ");
	scanf ("%d", &numero);
	
	resultado = numero % 2;
	
	if (resultado == 0){
		printf ("O numero %d e par.", numero);
	
	} else printf ("O numero %d e impar.", numero);
	return 0;
}
