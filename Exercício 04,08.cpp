#include <stdio.h>
#include <locale.h>
int main () {
	char sexo, F, M, nome [25];
	float altura, peso;
	
	printf("Ola. Qual seria o seu nome: ");
	scanf ("%s", &nome);
	
	printf ("Qual seria o seu genero? (F = feminino) (M = masculino): ");
	scanf ("%1s", &sexo);
	
	printf ("Qual sua altura, em centimetros? ");
	scanf ("%f", &altura);
	
	if ((sexo == F) || (sexo == 'm')){
		peso = (62.1 * altura) - 44.7;
		printf ("Ilma. Sra. %s, seu peso ideal seria em media %.f\n", nome, peso);
		return 0;
	} else {
		peso = (72.5 * altura) - 58;
	printf ("Ilmo. Sr. %s, seu peso ideal, levando em conta sua altura, seria em media %.f\n", nome, peso);
	return 0;
	}
	
	
}
