#include <stdio.h>
int main () {
	int nascimento, atual, media;
	printf ("Ola, sou o calculador de dias. Para prosseguir com o calculo, informe o ano atual, e em seguida, o ano de seu nascimento.\n ");
	scanf ("%d%d", &atual, &nascimento);
	media = (atual - nascimento) * 365;
	printf ("O numero de dias vividos por voce e um pouco maior que %d", media);
	return 0;
}
//Voc� tem um desejo incontrol�vel de descobrir quantos dias voc� j� viveu em toda a sua vida, 
//ent�o fa�a um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois calcule e escreva o nome e o n�mero de dias, aproximados, j� vividos por essa pessoa.
