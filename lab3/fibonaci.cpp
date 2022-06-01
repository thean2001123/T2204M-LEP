#include<stdio.h>
int main(){
     int n;
     printf("Nhap n: ");
     scanf("%d",&n);
     int x1=0;
     int x2=1;
     int x3=1;
     if(n==0){
     	printf("X(0)=0");
	 }else{
     for(int i=3;i<=n;i++){
        x1=x2;
        x2=x3;
        x3=x1+x2;
     }
     printf("X(%d) = %d",n,x3);
 }
     return 0;
}
