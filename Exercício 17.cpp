#include <stdio.h>
int main () {
	int nascimento, atual, media;
	printf ("Ola, sou o calculador de dias. Para prosseguir com o calculo, informe o ano atual, e em seguida, o ano de seu nascimento.\n ");
	scanf ("%d%d", &atual, &nascimento);
	media = (atual - nascimento) * 365;
	printf ("O numero de dias vividos por voce e um pouco maior que %d", media);
	return 0;
}
//Você tem um desejo incontrolável de descobrir quantos dias você já viveu em toda a sua vida, 
//então faça um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois calcule e escreva o nome e o número de dias, aproximados, já vividos por essa pessoa.
