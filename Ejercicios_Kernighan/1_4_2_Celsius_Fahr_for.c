#include<stdio.h>
#define INICIO 0
#define FINAL 300
#define PASO 20

int main(){
	int fahr;
	float celsius;
	
	printf("Celsius\t\tFahrenheit\n");
	
	for (fahr = INICIO; fahr <= FINAL; fahr += PASO){
		celsius = 5.0/9.0 * (fahr - 32);
		printf("%.3f\t\t%3d\n", celsius, fahr);
	}
	
	return 0;
}
