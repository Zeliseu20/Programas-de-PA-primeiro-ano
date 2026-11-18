#include <stdio.h>
 
int main() {
int numero;
int positivos = 0;
int negativos = 0;
    printf("Digite os numeros (digite 0 para sair):\n");
    
	while (1) {
        scanf("%d", &numero);
        if (numero == 0) {

            break;

        }
        if (numero > 0) {

            positivos++;
        } else {

            negativos++;

        }

    }
    printf("Quantidade de numeros positivos: %d\n", positivos);
    printf("Quantidade de numeros negativos: %d\n", negativos);

    return 0;
}

 
