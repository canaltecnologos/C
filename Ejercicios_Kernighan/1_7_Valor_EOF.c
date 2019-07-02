#include<stdio.h>

int main(){
	int caracter;
	
	printf("Programa listo\n");
	
	while((caracter = getchar()) != EOF){
		printf("Valor de la expresion getchar()!=EOF es: %d\n", caracter!=EOF);
	}
	
	printf("Valor de la expresion getchar()!=EOF es: %d\n", caracter!=EOF);
	printf("El valor de EOF es: %d\n", caracter);
	
	return 0;
}
