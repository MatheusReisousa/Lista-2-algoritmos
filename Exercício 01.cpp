#include <stdio.h>
#include <locale.h>
int main () {
	 setlocale (LC_ALL, "Portuguese");
	 int velocidade;
	 char placa [8];
	 
	 printf("Qual foi a velocidade do carro, em km/h? ");
	 scanf("%d", &velocidade);
	 
	 printf("Qual é a placa do carro? ");
	 scanf("%s", &placa);
	 
	 if(73 < velocidade < 87){
	 	printf("O carro de placa %s, estava à %d km/h, o que não confere multa no Eixo Rodoviário.", placa, velocidade);
	 }else{
	 	printf("O carro de placa %s, estava à %d km/h, excedendo o limite no Eixo Rodoviário e foi multado.", placa, velocidade); 
	 }
	  
	return 0;
}
