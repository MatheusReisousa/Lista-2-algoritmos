#include<stdio.h>
int main(){
	int ddd;
	
	printf ("Ola, insira aqui o DDD a ser examinado:\n");
	scanf ("%d", &ddd);
	
	switch (ddd) {
		case 61:
        printf("O identificador refere-se a Brasilia");
        break;
    case 71:
        printf("O identificador refere-se a Salvador");
        break;
    case 11:
        printf("O identificador refere-se a Sao paulo");
        break;
    case 21:
        printf("O identificador refere-se a Rio de Janeiro");
        break;
    case 32:
        printf("O identificador refere-se a Juiz de Fora");
        break;
    case 19:
        printf("O identificador refere-se a Campinas");
        break;
    case 27:
        printf("O identificador refere-se a Vitoria");
        break;
    case 31:
        printf("O identificador refere-se a Belo Horizonte");
        break;
    
    default: printf("O identificador nao possui o valor inserido em seu banco de dados.");
        break;
    }
    return 0;
	}

