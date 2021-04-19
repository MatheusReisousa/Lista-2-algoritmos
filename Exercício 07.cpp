#include<stdio.h>
int main () {
	float valor1, valor2, resultado;
	
	printf ("Insira aqui o primeiro valor: ");
	scanf ("%f", &valor1);
	
	printf ("Insira aqui o segundo valor: ");
	scanf ("%f", &valor2);
	
	if (valor1 >= valor2) {
		resultado = valor1 - valor2;
	} else  {
		resultado = valor2 - valor1;
		
	}
		printf ("A diferenca entre o maior numero e o menor resulta em %f", resultado);
			return 0;
}
//ler dois valores numéricos e apresentar a diferença do maior valor pelo menor.
