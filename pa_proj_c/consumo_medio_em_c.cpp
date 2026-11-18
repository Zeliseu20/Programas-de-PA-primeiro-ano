#include <stdio.h>

int main() {
	float distancia;
	float gasolina;
	float consumo;
	
	printf("Digite a distância percorrida em KM: ");
	scanf("%f", &distancia);
	printf("Digite o combustivel gasto em litros: ");
	scanf("%f", &gasolina);
	consumo = distancia / gasolina;
	printf("Consumo medio: %f", consumo);
	
	return 0;
}
