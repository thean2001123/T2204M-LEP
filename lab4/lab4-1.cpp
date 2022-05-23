#include<stdio.h>

int main() {
	int dem=0;
    int n;
    int arr[n];
    int sum = 0;
    printf("Nhap n:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0 && arr[i] > 0) {
            sum += arr[i];
            dem ++;
        }
    }
    if(dem==0){
    	printf("khong co so le");
	}else{
	
    printf("%f",(float)sum/dem);
}
    return 0;
}
