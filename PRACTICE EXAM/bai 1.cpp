#include <stdio.h>
int main(){
	int n ,tmp;
	do{
		printf("Nhap 3 so:");
		scanf("%d", &n);
		if(n < 99){
			printf("Nhap lai!!\n");
		}
		else if(n > 999){
			printf("Nhieu so nguyen phai nhap lai!!\n");
		}
	}while(n < 99 || n > 999);
    printf("So %d doc la: ", n);
    while(n != 0) {
        tmp = (tmp * 10) + (n % 10);
        n /= 10;
    } 
    while(tmp != 0) {
        switch(tmp % 10) {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }     
        tmp = tmp / 10;
    }
    return 0;
}
	
