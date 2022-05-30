#include<stdio.h>

int main(){
	int n;
	float sum = 0;
	do{
		printf("Input n: ");
		scanf("%d", &n);
		if(n < 1){
			printf("n must be greater or equal to 1\n");
		}
	}while(n < 1);
	for(int i = 1; i <= n; i++){
    	sum = sum + 1.0 / i;
  	}
  	printf("\nSum of 1 + 1/2 + ... + 1/%d is: %.3f", n, sum);
}
