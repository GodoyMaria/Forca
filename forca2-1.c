#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char palavra[30];

int main()
{
	char letras[30];
	int i, tamanho=0, chances=6, sucesso=0;
	
	printf("Modo mestre...\n");
	printf("Digite a palavra para o jogo:");
	gets(palavra);

	printf("\nModo jogador...\n");
	for(i=0;i<strlen(palavra);i++)
	{
		tamanho++;
	}
	
	printf("Dica: A palavra possui %d letras\n", tamanho);
	printf("Voce possui %d chances.\n\n", chances);
	
	do
	{
		printf("Digite uma letra:");
		gets(letras);
		
	} while (chances>0 || sucesso!=0);
}
