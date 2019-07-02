#include<stdio.h>

int main(){
	int caracter;
	
	printf("Escribe cualquier cosa:\n");
	caracter = getchar();
	
	while (caracter != EOF){
		putchar(caracter);
		caracter = getchar();
	}
	
	return 0;
}
