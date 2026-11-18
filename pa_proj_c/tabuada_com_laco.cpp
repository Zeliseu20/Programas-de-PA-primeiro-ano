#include <stdio.h>

int main(){
	int num;
	int v = 10;
	printf("Qual seu numero?\n ");
	scanf("%d", &num);
	for(int i =1; i < 11; i++){
		printf("%d x %d = %d\n", num,i, num*i);
	}
	return 0;
}






