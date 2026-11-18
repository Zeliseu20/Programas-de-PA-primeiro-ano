#include <stdio.h>
int main (){
	int idade;
printf("Digite sua idade");
scanf("%d", &idade);
if (idade<12) {
printf("Crianca");
}
else if (idade>=12 & idade<=17) {
	printf("Adolescente");
}
else {
	printf("Maior de idade");
}
return 0;
}
