#include<stdio.h>

main(){
	long nc = 0; //número de caracteres en el archivo
	
	while(getchar() != EOF){
		++nc;
	}
	
	printf("Total de caracteres: %ld", nc);
}
