#include <stdio.h>

int main() {
	float cel;
	float fah;
	printf("Digite a temperatura em celsius: ");
	scanf("%f", &cel);
	fah = (cel * 1.8) +32;
	printf("temperatura em Fahrenheit: %f", fah);
}
