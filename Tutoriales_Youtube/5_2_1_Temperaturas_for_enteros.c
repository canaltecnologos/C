#include<stdio.h>

int main(){
	int fahr;
	int inicio, final, paso;
	float celsius;
	
	printf("Fahrenheit\tCelsius\n");
	
	for (fahr = inicio; fahr <= final; fahr += paso){
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d\t\t%.3f\n", fahr, celsius);
	}
	
	return 0;
}
