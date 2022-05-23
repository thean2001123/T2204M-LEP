#include<stdio.h>
int main(){
	int n;
	int arry[n];
	printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap mang: \n");
    for(int i=0; i<n; i++){
    	scanf("%d", &arry[i]);
	}
		for(int i=n-1; i>=0; i--){
			if(arry[i]%2==1){
				printf(" %d", arry[i]);
				break;
		}
	}
}
