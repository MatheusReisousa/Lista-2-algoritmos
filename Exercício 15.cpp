#include <stdio.h>
int main () {
	int horas, valor;
	printf ("Ola, sou o analista de preços. Por favor, insira aqui a quantidade de horas utilizadas pelo seu provedor de internet:\n");
	scanf ("%d", &horas);
	
	if (horas <= 20)
	printf ("O valor total da tarifa de internet e R$ 30.00");
	else 
	valor = 30 + 3*horas;
	printf ("O valor total da tarifa de internet e R$ %d.", valor);
	return 0; 
}
//Faça um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso à Internet, para isso você deverá ler a quantidade de horas que você utilizou. Sabe-se que você pagará R$ 30,00 por até 20 horas de uso (va1or básico)
// caso você tenha usado mais de 20 horas, então você deve acrescentar 10% do valor básico para cada hora extra utilizada.
