#include<stdio.h>
int main(){
	int dem = 0;
	int n;
	int arry[n];
	float sum =0;
	printf("Nhap n = ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		scanf("%d", &arry[i]);
	}
	for(int i=1; i<=n; i++){
		if(arry[i]%2!=0 && i%2 == 0){
			printf("%d ", arry[i]);
			dem ++;
		    sum += arry[i];	
		}
	}
		if(dem==0){
			printf("khong co so le");
		}else{

		printf("trung binh cong cac so le la: %f",(float)(sum/dem));
		
}
}
