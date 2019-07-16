#include<stdio.h>

#define DENTRO 1 //Dentro de una palabra
#define AFUERA 0 //Fuera de una palabra

main(){
	int caracter, lineas, palabras, caracteres, estado;
	
	lineas = palabras = caracteres = 0;
	estado = AFUERA;
	
	while((caracter = getchar()) != EOF){
		++caracteres;
		if(caracter == '\n')
			++lineas;
		if(caracter == '\n' || caracter == '\t' || caracter == ' ')
			estado = AFUERA;
		else if (estado == AFUERA){
			putchar('\n');
			estado = DENTRO;
			++palabras;
		}
		putchar(caracter);
	}
	
	printf("Lineas: %d\tPalabras: %d\tCaracteres: %d", lineas, palabras, caracteres);
}
