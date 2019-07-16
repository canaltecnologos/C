#include<stdio.h>

main(){
	int caracter, i, vacios, otros;
	int numeros[10];
	
	vacios = otros = 0;
	for(i = 0; i < 10; i++)
		numeros[i] = 0;
		
	while((caracter = getchar()) != EOF){
		if (caracter >= '0' && caracter <= '9')
			++numeros[caracter - '0'];
		else if (caracter == ' ' || caracter == '\n' || caracter == '\t')
			++vacios;
		else
			++otros;
	}
	
	printf("Digitos resultantes: \n");
	for(i = 0; i < 10; i++)
		printf(" %d", numeros[i]);
	printf("\nEspacios en blanco: %d\tOtros caracteres: %d", vacios, otros);
}
