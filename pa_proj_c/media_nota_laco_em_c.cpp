#include <stdio.h>

int main() {
	int media, nota, i,  soma;
	while(i < 5){
		printf("Qual a nota? \n");
		scanf("%d", &nota);
		i++;
		soma = soma + nota;
	}
	media = soma/5;
	printf("%d", media);
	return 0;
}
