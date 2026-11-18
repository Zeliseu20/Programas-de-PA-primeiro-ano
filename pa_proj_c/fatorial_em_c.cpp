#include <stdio.h>
 
int main() {

    int n;

    int f = 1;
 
    printf("Digite um numero: ");

    scanf("%d", &n);
 
for (int i = 1; i <= n; i++) {

    f *= i;

}
 
printf("o fatorial de %d e %d\n", n, f);
 
    return 0;

}
 
