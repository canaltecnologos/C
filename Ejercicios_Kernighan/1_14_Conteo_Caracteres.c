#include <stdio.h>

void ascii(void);

int main (void)
{
	int contadores[94];
	int caracter, i, j;
	
	for (i = 0; i < 126-32; i++)
		contadores[i] = 0;
		
	while ((caracter = getchar()) != EOF)
		++contadores[caracter-32];
		
	for (i = 0; i <126-32; i++)
	{
		putchar(i+32);
		printf(" ");
		for (j = 0; j < contadores[i]; j++)
			printf("*");
		printf("\n");
	}
	
	ascii();
}

void ascii(void)
{
	int i;
	
	for (i = 1; i <= 256; i++)
	{
		putchar(i);
		printf(" %d\t", i);
		if (i % 14 == 0)
			printf("\n");
	}
}
