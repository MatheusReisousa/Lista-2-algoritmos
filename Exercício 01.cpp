#include <stdio.h>
#include <locale.h>
int main () {
	 setlocale (LC_ALL, "Portuguese");
	 int velocidade;
	 char placa [8];
	 
	 printf("Qual foi a velocidade do carro, em km/h? ");
	 scanf("%d", &velocidade);
	 
	 printf("Qual � a placa do carro? ");
	 scanf("%s", &placa);
	 
	 if(73 < velocidade < 87){
	 	printf("O carro de placa %s, estava � %d km/h, o que n�o confere multa no Eixo Rodovi�rio.", placa, velocidade);
	 }else{
	 	printf("O carro de placa %s, estava � %d km/h, excedendo o limite no Eixo Rodovi�rio e foi multado.", placa, velocidade); 
	 }
	  
	return 0;
}
