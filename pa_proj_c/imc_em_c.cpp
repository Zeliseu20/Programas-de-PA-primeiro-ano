#include <stdio.h>

int main() {
	float peso, altura, imc;
	printf("Digite seu Peso em Kg: ");
	scanf("%f", &peso);
	printf("Digite sua altura em metros: ");
	scanf("%f", &altura);
	if(peso <= 0 || altura <= 0 ) {
		printf("Dados de entrada invalidos");
	}
	imc = peso/(altura*altura);
	
	if(imc < 18.5){
		printf(" Abaixo do peso");
	}
		else if(imc >= 18.5 || imc <= 24.9) {
			printf(" Peso normal");
		}
		
			else if(imc >= 25.0 || imc <= 29.9 ) {
				printf(" Sobrepeso");
			}
			
				else if(imc >= 30.0 || imc <= 34.9) {
					printf(" Obesidade grau 1");
				}
				
					else if(imc >= 35.0) {
						printf(" Obesidade grau 2 ou superior");
					}
				
	return 0;
}
