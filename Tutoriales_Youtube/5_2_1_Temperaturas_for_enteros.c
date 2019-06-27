#include<stdio.h>

int main(){
	int fahr, celsius;
	int inicio, final, paso;
	
	inicio = 0;
	final = 300;
	paso = 20;
	
	printf("Fahrenheit\tCelsius\n");
	
	for (fahr = inicio; fahr <= final; fahr += paso){
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d\t\t%3d\n", fahr, celsius);
	}
	
	return 0;
}
