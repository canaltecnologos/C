#include<stdio.h>

int main(){
	printf("25 + 5 * 5 = %d\n", 25+5*5);
	printf("25 + (5 * 5) = %d\n", 25+(5*5));
	printf("(25 + 5) * 5 = %d\n", (25+5)*5);
	printf("25 * 5 + 5 = %d\n", 25*5+5);
	printf("25 * (5 + 5) = %d\n", 25*(5+5));
	
	return 0;
}
