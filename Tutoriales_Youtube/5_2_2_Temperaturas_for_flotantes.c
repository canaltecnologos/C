#include<stdio.h>

int main(){
	int fahr;
	int inicio, final, paso;
	float celsius;
	
	printf("Fahrenheit\tCelsius\n");
	
	inicio = 0;
	final = 300;
	paso = 20;
	
	for (fahr = inicio; fahr <= final; fahr += paso){
		celsius = 5.0/9.0 * (fahr - 32);
		printf("%3d\t\t%.3f\n", fahr, celsius);
	}
	
	return 0;
}
