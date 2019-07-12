 #include<stdio.h>

main(){
	long nc; //número de caracteres en el archivo
	
	for(nc = 0; getchar() != EOF; ++nc)
	;
	
	printf("Total de caracteres: %ld", nc);
}
