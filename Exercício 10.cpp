#include <stdio.h>
#include <locale.h>
int main (){
	int v1, v2, v3;
	
	printf("Ola. Examinaremos os 3 valores apresentados a seguir:\n");
	scanf ("%d%d%d", &v1,&v2,&v3);
	
		if (v1 <= v2 && v1 <= v3)
		printf ("Dos valores apresentados, o menor numero e %d", v1);
		else if (v2 <= v1 && v2 <= v3)
		printf ("Dos valores apresentados, o menor numero e %d", v2);
		else if (v3 <= v1 && v3 <= v2)
		printf ("Dos valores apresentados, o menor numero e %d", v3);
		else
		printf ("Sei la irmao");

	
	
}
//Fa�a um algoritmo em portugu�s estruturado que leia tr�s valores num�ricos e encontre qual o menor deles, mostrando-o no final. Fa�a o chinesinho ao lado do seu algoritmo.
