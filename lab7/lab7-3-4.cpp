#include <stdio.h>
#include"function.h"

int main() {
    int n;
	int a[n];
	do{
    	printf("Enter n: ");
        scanf("%d", &n);
        if(n <= 0){
            printf("n must be greater than 0\n");
        }
    }while(n <= 0);
    input(n,a);
    printf("Greatest common divisor of array is %d\n",GDC(a, n));
    printf("Least common multiple of array is %d",LCM(a, n));
}
