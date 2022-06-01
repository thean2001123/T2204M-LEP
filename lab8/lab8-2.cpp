#include<stdio.h>
#include<string.h>

int main(){
    int i,j;
    char str[2][25],temp[25];
 
    for(i=0; i<2; i++){
    	printf("Enter string %d: ", i+1);
    	gets(str[i]);
	}
    for(i=0; i<2; i++)
    	for(j=i+1; j<2; j++){
        	if(strcmp(str[i], str[j])>0){
	            strcpy(temp, str[i]);
	            strcpy(str[i], str[j]);
	            strcpy(str[j], temp);
        	}
    	}
    printf("The preceding string in the alphabet is: %s", str[0]);
}	
