#include<stdio.h>

int main(){
    char str[10][25];
 
    for(int i=0; i<10; i++){
    	printf("Enter string %d: ", i+1);
    	gets(str[i]);
	}
	printf("\nString list:\n");
	for(int i=0; i<10; i++){
		printf("%s\n", str[i]);
	}
}	
