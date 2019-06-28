#include<stdio.h>
#define INICIO 0
#define FINAL 300
#define PASO 20

int main(){
	int fahr;
	float celsius;
	
	fahr = INICIO;
	printf("Celsius\t\tFahrenheit\n");
	
	while (fahr <= FINAL){
		celsius = 5.0/9.0 * (fahr - 32);
		printf("%.3f\t\t%3d\n", celsius, fahr);
		fahr += PASO;
	}
	
	return 0;
}
