#include<stdio.h>
int check(int n,int a[],int k){
	for(int i=0;i<n;i++){
		if(a[i]==k) 
		return 1;
	}
	return 0;
}

void input(int &n,int a[]){
	printf("Input number of array: ");
	scanf("%d",&n);
	int temp;
	for(int i=0;i<n;i++){
		printf("Input number [%d]: ",i+1);
		scanf("%d",&temp);
		if(check(n,a,temp)==1){
			printf("\nDuplicate value, please re-enter!\n");
			i--;
		}else 
		a[i]=temp;
	}
}

void output(int n,int a[]){
	printf("\nThe values in the array include: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

main(){
	int n,a[100];
	input(n,a);
	output(n,a);
}
