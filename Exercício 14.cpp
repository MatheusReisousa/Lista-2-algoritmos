#include <stdio.h>
#include <locale.h>
int main (){
	int v1, v2, v3;
	
	printf("Ola. Examinaremos os 3 valores apresentados a seguir:\n");
	scanf ("%d%d%d", &v1,&v2,&v3);
	
		if (v1 >= v2 && v1 >= v3)
		printf ("Dos valores apresentados, o maior numero e %d", v1);
		else if (v2 >= v1 && v2 >= v3)
		printf ("Dos valores apresentados, o maior numero e %d", v2);
		else if (v3 >= v1 && v3 >= v2)
		printf ("Dos valores apresentados, o maior numero e %d", v3);
		else
		printf ("Sei la irmao");

	
	
}
