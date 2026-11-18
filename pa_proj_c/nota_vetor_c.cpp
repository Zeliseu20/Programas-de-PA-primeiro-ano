#include <stdio.h>

int main(){
	int notas[8];
	int i;
	int soma;
	float media;
	
	for(i = 0; i < 8; i++){
		printf("Nota %d: ", i+1);
		scanf("%d", &notas[i]);
		soma+notas[i];
	}
	media = soma/5;
	printf("Media = %.1f\n", media);
	
	if(notas[0,1,2,3,4,5,7,8] = 10 || notas[0,1,2,3,4,5,7,8] < 9){ 
		printf("Maior nota: %d\n", notas[i]);
	}
	else if(notas[0,1,2,3,4,5,7,8] < 6 ){
		printf("Menor nota: %d\n", notas[i]);
	}
}
