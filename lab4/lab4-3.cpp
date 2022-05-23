#include <stdio.h>

int main(){
    int a[10] = {1 ,2 , 3, 4, 5, 6, 7, 8, 9, 10};
    int search, j;
    
    printf("Cac phan tu: ");
    for (int i = 0; i < 10; i++){
    	printf("%d ", a[i]);
	}
    printf("\nSo muon tim: ");
    scanf("%d", &search);
    
    for(int i = 0; i < 10; i++){
        if(search == a[i]){
            j = i;
            break;
        }
    }
    if(j != NULL){
        printf("Tim thay so %d.", search, j);
    }else{
        printf("So %d khong tim thay.", search);
    }    
}
