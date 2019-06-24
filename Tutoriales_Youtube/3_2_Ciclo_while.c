#include<stdio.h>

int main(){
	int i = 0;
	
	while (i*i < 1134){
		printf("i es: %d\ti^2 es: %d\n", i, i*i);
		i++;
	}
	
	printf("\n(Finalizado el ciclo while) i es: %d\ti^2 es: %d\n", i, i*i);
	
	return 0;
}
