#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void input (float a[], int &n){
	do{
		printf("Enter number of elements: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX){
			printf("\nNumber of element must be greater than 0!");
		}
	}while(n <= 0 || n > MAX);
	
	for(int i = 0; i < n; i++){
		printf("\nInput [%d]: ", i+1);
		scanf("%f", &a[i]);
	}
}


void output(float a[], int n){
	for(int i = 0; i < n; i++){
		printf("%.2f ", a[i]);
	}
}

void search(float a[], int n){
	float max = a[0];
	float min = a[0];
	for(int i = 0; i < n; i++){	
		max = (a[i] > max) ? a[i] : max;
		min = (a[i] < min) ? a[i] : min;
	}
	printf("\n[%.2f , %.2f] is the segment containing the values in the array.\n", min, max);
}
int main(){
	int n;
	float a[MAX];
	float b[MAX];
	
	input(a, n);
	
	
	output(a, n);
	search(a, n);
	
	getch();
	return 0;
}
