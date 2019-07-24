#include<stdio.h>

#define DENTRO 1
#define AFUERA 0

main(){
	int caracter, estado, longitud, ultimo, maximo;
	int i, j;
	int palabras[20];
	
	longitud = 0;
	estado = AFUERA;
	
	for (i = 0; i < 20; i++)
		palabras[i] = 0;
		
	while((caracter = getchar()) != EOF){
		if (caracter != '\n' && caracter != '\t' && caracter != ' '){
			++longitud;
			estado = DENTRO;
		}
		else{
			if (estado == DENTRO){
				++palabras[longitud];
				longitud = 0;
			}
			estado = AFUERA;
		}
		ultimo = caracter;
	}
	if (ultimo != '\n' && ultimo != '\t' && ultimo != ' ')
		++palabras[longitud];
	
	printf("Lontud\tCantidad\n");
	for(i = 0; i < 20; i++)
		printf("%8d\t%8d\n", i+1, palabras[i]);
	
	maximo = palabras[0];
	for(i = 0; i < 20; i++){
		if (palabras[i] > maximo)
			maximo = palabras[i];
	}
	
	for (i = maximo; i > 0; i--){
		for(j = 0; j < 20; j++){
			if(palabras[j] >= i)
				printf("*\t");
		}
		printf("\n");
	}
	
	for(i = 0; i < 20; i++)
		printf("%d\t", i+1);
}
