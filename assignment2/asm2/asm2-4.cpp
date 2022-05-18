#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int sobandau=n;
	int sodaonguoc=0;
	int i=0;
	while(n>0){
		i=n%10;
		sodaonguoc= sodaonguoc*10+i;
		n=n/10;
	}
	printf("is reverse number of %d", sodaonguoc, sobandau);
	return 0;
	
}
