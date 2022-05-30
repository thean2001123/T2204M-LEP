#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d", &n);
	
	int i=1,c=0;
	while(i<=n){
		if(n%i==0){
			c++;
		}else {
		}
		i++;
	}
	if(c==2){
		printf("la so nguyen to %d",n);
		
	}else{
		printf("khong phai so nt %d",n);
	}
}
