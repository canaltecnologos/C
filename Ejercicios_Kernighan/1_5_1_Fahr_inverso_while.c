#include<stdio.h>
#define INICIO 300
#define FINAL 0
#define PASO 20

int main(){
	int fahr;
	float celsius;
	
	fahr = INICIO;
	printf("Fahrenheit\tCelsius\n");
	
	while (fahr >= FINAL){
		celsius = 5.0/9.0 * (fahr - 32);
		printf("%3d\t\t%.3f\n", fahr, celsius);
		fahr -= PASO;
	}
	
	return 0;
}
