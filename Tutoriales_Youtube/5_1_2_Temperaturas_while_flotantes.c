#include<stdio.h>

int main(){
	int fahr;
	int inicio, final, paso;
	float celsius;
	
	inicio = 0;
	final = 300;
	paso = 20;
	
	fahr = inicio;
	printf("Fahrenheit\tCelsius\n");
	
	while (fahr <= final){
		celsius = 5.0/9.0 * (fahr - 32);
		printf("%3d\t\t%.3f\n", fahr, celsius);
		fahr += paso;
	}
	
	return 0;
}
