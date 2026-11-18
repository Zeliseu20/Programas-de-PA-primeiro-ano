#include <stdio.h>
 
int main() { 
int tempo;
printf("Digite o tempo de permanencia");
scanf("%d", &tempo);
if (tempo<=2) {
	printf("10,00\n"); }
else if (tempo>=3 && tempo<=5) {
printf("18,00\n");}
if (tempo>=6) {
	printf("25,00\n"); }
return 0;
}
