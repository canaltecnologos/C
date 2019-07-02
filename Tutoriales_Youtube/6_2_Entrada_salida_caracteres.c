#include<stdio.h>

int main(){
	int caracter;
	
	printf("Escribe cualquier cosa:\n");
	
	while ((caracter = getchar()) != EOF){
		putchar(caracter);
	}
}
