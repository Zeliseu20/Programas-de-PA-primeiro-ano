#include <stdio.h>
 
int main() {
int nota;
printf("Digite sua nota");
scanf("%d", &nota);
if (nota>=70) {
    printf("aprovado\n"); }
else if (nota<70) {
printf("reprovado\n");
}
return 0;
}
 
 
