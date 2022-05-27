#include<stdio.h>
int ucln(int a, int b){
	int max=0;
	for(int i =1; i<=a && i<=b; i++){
		if(a%i==0 && b%i==0){
			max=i;
		}
	}
	return max;
}
int bcnn(int a, int b){
	int min = (a*b) / ucln(a,b);
	return min;
}
int tongchuso(int n){
	int sodu;
	int sum =0;
	while(n!=0){
		sodu = n%10;
		sum = sum + sodu;
		n=n/10;
	}
	return sum;
}
