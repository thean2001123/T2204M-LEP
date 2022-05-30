#include <stdio.h>
//find perfect number
int FPN(int n){
    int total=0;
    bool isPerfectNumber = false;
    //sum of all divisors 
    for (int i=1; i<n; i++){
        if (n % i == 0){
			total+=i; //if it's a divisor, add it up
		}
    }
    if (total == n & n!=0){
    	isPerfectNumber = true;
	}
    return isPerfectNumber;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int check = FPN(n);
    if( check == 1 ){
    	printf("%d is perfect number.\n", n);
	}else{
		printf("%d isn't perfect number.\n", n);	
	}
    return 0;
}
