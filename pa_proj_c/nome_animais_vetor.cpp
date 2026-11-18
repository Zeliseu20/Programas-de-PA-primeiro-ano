#include <stdio.h>

int main(){
	char nome[20];
	int i = 0;
	
	while (nome[i] != '\0') {
		printf("%c\n", nome[i]);
		i++;
	}
}
