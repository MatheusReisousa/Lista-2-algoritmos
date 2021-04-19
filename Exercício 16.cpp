#include <stdio.h>
int main (void) {
	double alt1, alt2, alt3;
	char nome1 [30], nome2[30], nome3[30];
	
	printf ("Ola, sou o analista de dados. Apresente o nome da primeira pessoa a ser analisada:\n");
	fgets (nome1, 30, stdin);
	printf ("Agora insira a altura referente a essa pessoa:\n");
	scanf ("%lf", &alt1);
	fflush (stdin);
	
	printf ("Agora, apresente o nome da segunda pessoa a ser analisada:\n");
	fgets (nome2, 30, stdin);
	printf ("Agora insira a altura referente a essa pessoa:\n");
	scanf ("%lf", &alt2);
	fflush (stdin);
	
	printf ("Agora, apresente o nome da terceira pessoa a ser analisada:\n");
	fgets (nome3, 30, stdin);
	printf ("Agora insira a altura referente a essa pessoa:\n");
	scanf ("%lf", &alt3);
	fflush (stdin); 
	
	if (alt1<=alt2 && alt1<=alt3)
	printf ("Das pessoas apresentadas, a menor e %s, com apenas %.lf de altura.", nome1, alt1);
	else if (alt2<=alt1 && alt2<=alt3)
	printf ("Das pessoas apresentadas, a menor e %s, com apenas %.lf de altura.", nome2, alt2);
	else if (alt3<=alt1 && alt3<=alt2)
	printf ("Das pessoas apresentadas, a menor e %s, com apenas %.lf de altura.", nome3, alt3);
	else
	printf ("Fui incapaz de comparar as alturas :(");
}
