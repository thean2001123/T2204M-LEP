#include <stdio.h>
 
int main() {
    for(int i = 1; i <= 5; i++) {
    	for(int j = 1; j <= i; j++){
    		for(int x = 1; x <= i; x++){
    			printf("*");
			}
			printf(" ");
		}
    	printf("\n");
    }
    return 0;
}
