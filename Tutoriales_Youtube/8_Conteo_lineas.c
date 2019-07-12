#include<stdio.h>

main(){
	int caracter, nl = 0;
	
	while((caracter = getchar()) != EOF){
		if(caracter == '\n')
			++nl;
	}
	
	printf("El numero de lineas en el archivo es de: %d", nl);
}
