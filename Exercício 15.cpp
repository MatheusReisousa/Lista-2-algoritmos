#include <stdio.h>
int main () {
	int horas, valor;
	printf ("Ola, sou o analista de pre�os. Por favor, insira aqui a quantidade de horas utilizadas pelo seu provedor de internet:\n");
	scanf ("%d", &horas);
	
	if (horas <= 20)
	printf ("O valor total da tarifa de internet e R$ 30.00");
	else 
	valor = 30 + 3*horas;
	printf ("O valor total da tarifa de internet e R$ %d.", valor);
	return 0; 
}
//Fa�a um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso � Internet, para isso voc� dever� ler a quantidade de horas que voc� utilizou. Sabe-se que voc� pagar� R$ 30,00 por at� 20 horas de uso (va1or b�sico)
// caso voc� tenha usado mais de 20 horas, ent�o voc� deve acrescentar 10% do valor b�sico para cada hora extra utilizada.
