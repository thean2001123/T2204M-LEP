#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,delta,x1,x2,x;
	printf("nhap vao cac he so=");
	scanf("%f%f%f", &a,&b,&c);
	
	if(a==0){
		if (b==0 && c !=0){
			printf("pt vo nghiem\n");
			
		}else if(b==0 && c==0){
			printf("pt co vo so nghiem\n");
		}else {
			x= -c/b;
			printf("nghiem pt = %f",x);
		}
	}
		 else {
		delta = b*b -4*a*c;
		if(delta<0){
			printf("pt vo nghiem");
		}else if(delta == 0){
			x1 = -b/(2*a);
			printf("pt co nghiem kep x = %f", x1);
		}else {
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			printf("x1=%f\nx2=%f",x1,x2);
		}
	}
	return 0;
} 
