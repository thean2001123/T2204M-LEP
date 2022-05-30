#include<stdio.h>
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

void DisplayArray(float a[], int n, float b[], int x){
	for(int i = 0; i < n; i++){
		b[i] = abs(x - a[i]);
	}
}

float FindMin(float b[], int n){
	int Min = b[0];
	for (int i = 1; i < n; i++){
		if (b[i] < Min){
			Min = b[i];
		}
	}
return Min;
}

void Result(float a[], float b[], int n){
	printf("\nThe value in the array closest from the x value is: ");
	int Min = FindMin(b, n);
	for (int i = 0; i < n; i++){
		if (b[i] == Min){
			printf("%.2f ", a[i]); 
		}
	}
}

int main(){
	int n;
	float a[MAX];
	float b[MAX];
	
	input(a, n);
	output(a, n);
	
	float x;
	printf("\nEnter x: ");
	scanf("%f", &x);
	
	DisplayArray(a, n, b, x);
	Result(a, b, n);
	
	return 0;
}
