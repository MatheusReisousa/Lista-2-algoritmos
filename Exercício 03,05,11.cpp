#include <stdio.h>
int main () {
	double a, b, c;
	printf ("Qual o lado a possivel para o triangulo? ");
	scanf ("%lf", &a);
	printf ("Qual o lado b possivel para o triangulo? ");
	scanf ("%lf", &b);
	printf ("Qual o lado c possivel para o triangulo? ");
	scanf ("%lf", &c);
	if (( a<b+c) && (b<c+a) && (c<a+b)){
		printf ("Os lados podem formar um triangulo.");
		return 0;
	} else {
		printf ("Os lados nao sao capazes de formar um triangulo.");
		return 0;
	}
	return 0;
}
