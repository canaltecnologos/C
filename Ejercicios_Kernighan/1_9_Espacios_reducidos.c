#include<stdio.h>

main(){
	int caracter;
	
	while((caracter = getchar()) != EOF){
		if (caracter == ' '){
			putchar(caracter);
			while((caracter = getchar()) == ' ')
			;
		}
		putchar(caracter);
	}
}
