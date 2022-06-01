#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i, n;
    printf("Enter string: ");
    gets(str);
    n = strlen(str)-1;
    printf("String %s after reverse is: ", str);
    for(i=n; i>=0; i--){
        printf("%c", str[i]);
    }
    return 0;
}
