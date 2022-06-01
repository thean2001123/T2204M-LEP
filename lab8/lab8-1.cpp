#include<stdio.h>

int main(){
	char s1[100];
	char s2[100];
	int i = 0, j = 0;
	printf("Enter string 1: ");
	gets(s1);
	printf("Enter string 2: ");
	gets(s2);
    printf("String 1 = ");
	while(s1[i] != '\0'){
		printf("%c", s1[i]);
	    i++;
	}
	printf("\nString 2 = ");
	while(s2[j] != '\0'){
		printf("%c", s2[j]);
	    j++;
	}
	printf("\nThe length of string 1 is: %d", i);
	printf("\nThe length of string 2 is: %d", j);
	if(i>j){
		printf("\nThe string 1 longer than string 2.");
	}else{
		printf("\nThe string 2 longer than string 1.");
	}
	return 0;
}
