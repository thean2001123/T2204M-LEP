#include <stdio.h>
#include"function.h"

int main(){
	int x, y;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	printf("%d^%d = %d",x,y,pow(x,y));
}
