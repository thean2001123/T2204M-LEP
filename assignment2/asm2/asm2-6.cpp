#include <stdio.h>
int main(){
	int n;
	int i=1;
	int tong=0;
	printf("Nhap n:");
	scanf("%d",&n);
	while(i<n){
		tong = tong + i;
		i++;
		
		
	}
	printf("tong la: %d ", tong);
	
} 
