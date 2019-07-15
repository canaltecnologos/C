#include<stdio.h>

main(){
	int caracter;
	
	while((caracter = getchar()) != EOF){
		if(caracter == '\t'){
			putchar('\\');
			putchar('t');
			//printf("\\t");
		}
		else if(caracter == ' '){
			putchar('\\');
			putchar('b');
			//printf("\\b");
		}
		else if (caracter == '\\'){
			putchar('\\');
			putchar('\\');
			//printf("\\\\");
		}
		else
			putchar(caracter);	
	}
}
