#include<stdio.h>
#include <string.h>

int main(){
    int max=0;
    char str[10][25];
    for(int i=0;i<10;i++){
        printf("Enter string %d: ", i+1);
    	gets(str[i]);
        if(strlen(str[i]) > max){
        	max=strlen(str[i]);
		}
    }
    for(int i=0;i<10;i++){
        if(strlen(str[i])==max){
            printf("Longest string is %s with %d characters.", str[i], max);
            break;
        }
    }
    return 0;
}
