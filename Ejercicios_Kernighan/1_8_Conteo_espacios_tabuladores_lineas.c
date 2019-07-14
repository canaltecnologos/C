#include<stdio.h>

main(){
	int caracter, nl = 0, espacios = 0, tabuladores = 0;
	
	while((caracter = getchar()) != EOF){
		if(caracter == '\n')
			++nl;
		else if(caracter == '\t')
			++tabuladores;
		else if(caracter == ' ')
			++espacios;
	}
	
	printf("El numero de espacios en blanco en el archivo es de: %d\n", espacios);
	printf("El numero de tabuladores en el archivo es de: %d\n", tabuladores);
	printf("El numero de lineas en el archivo es de: %d", nl);
}
