#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_FRASE 100


void mezclar_con_numeros (char frase[], char frase_codificada[]){
	int i=0;
	char nueva_letra;
	//recorro la frase letra por letra y agrego a la letra mapeada a la nueva frase
	for(i=0;i < strlen(frase);i++){
		///printf("%i\n",strlen(frase));
		///printf("%c\n",frase[i]);
		switch (frase[i]){
			case 'a':
			nueva_letra = '4';
			break;
			case 'e':
			nueva_letra = '3';
			break;
			case 'i':
			nueva_letra = '1';
			break;
			case 'o':
			nueva_letra = '0';
			break;
			case 'u':
			nueva_letra = '5';
			break;
			case ' ':
			nueva_letra = '*';
			break;
			default:
			nueva_letra = frase[i];
			break;
		}
		frase_codificada[i] = nueva_letra;
		
	}
	frase_codificada[i]='\0';
} 

int main()
{	

	char letra_ingresada;
	char palabra[10];
	char nueva_palabra[10];
	char frase_ingresada[MAX_FRASE];
	char *frase;
	char *frase_nueva;



	printf("Ingrese una frase: ");
	//scanf(" %[^\n] ", frase_ingresada);

    fgets(frase_ingresada, MAX_FRASE, stdin);


	//solicito en memoria lo justo y necesario
	frase = malloc(sizeof(char)*strlen(frase_ingresada));
	frase_nueva = malloc(sizeof(char)*strlen(frase_ingresada));

	strcpy(frase, frase_ingresada);
	//printf("%s \n", frase);

	//codificacion
	mezclar_con_numeros(frase, frase_nueva);
	printf("Frase ingresada: %s\n ",frase );
	printf("Frase codificada: %s\n ",frase_nueva );

	printf("¿Desea continuar si (S) o no (N)?: ");
	scanf("%c", &letra_ingresada);
	getchar();

	printf("Letra ingresada %c \n",letra_ingresada);

	while(letra_ingresada == 'S'){

		//printf("BUCLE ");
		printf("Ingrese una frase: ");
		//scanf(" %[^\n] ", frase_ingresada);
		fgets(frase_ingresada, MAX_FRASE, stdin);

		//getchar();

		//solicito en memoria lo justo y necesario
		frase = malloc(sizeof(char)*strlen(frase_ingresada));
		frase_nueva = malloc(sizeof(char)*strlen(frase_ingresada));

		strcpy(frase, frase_ingresada);
		//printf("%s \n", frase);

		//codificacion
		mezclar_con_numeros(frase, frase_nueva);
		printf("Frase ingresada: %s\n ",frase);
		printf("Frase codificada: %s\n ",frase_nueva );

		printf("¿Desea continuar si (S) o no (N)?: ");
		scanf("%c", &letra_ingresada);
		getchar();
	}

	printf(" El programa ha finalizado\n");
	return 0;
}