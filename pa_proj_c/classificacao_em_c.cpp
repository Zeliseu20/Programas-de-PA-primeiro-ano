#include <stdio.h>

int main() {
	int a;
	int b;
	int c;
	
	printf("Digite seu primeiro lado: ");
	scanf("%d", &a);
	printf("Digite seu segundo lado:  ");
	scanf("%d", &b);
	printf("Digite seu terceiro lado:  ");
	scanf("%d", &c);
	if(a+b > c && a+c > b && b+c > a){
		printf("Forma um triangulo ");
		}
		else{
			printf("Nao forma um triangulo ");
		}
			if(a == b && b == c && a == c) {
				printf("Isoceles");
			}
			else if( a == b || b == c || c == a ){
				
				printf(" Equilatero");
				
			}
			else{
				printf("Escaleno");
			}
	
	return 0;
}
	

