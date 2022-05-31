void input(int n, int arr[]){
	for(int i = 0; i < n; i++){
		printf("Enter number %d: ",i+1);
		scanf("%d", &arr[i]);
	}
}

void output(int n, int arr[]){
	for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int pow(int x, int y)
{
    if(y == 1) {
        return x;
    } else {
        int temp = pow(x, y/2);
        if(y % 2 == 0)
            return temp * temp;
        else
            return temp * temp * x;
    }
}


int Gdc(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
    }
    return a; 
}

int GDC(int a[], int n) {
	if(n==1)
		return a[0];
	else
		return Gdc(a[n-1],GDC(a,n-1));
}

int maxNumber(int a[], int n)
{
    int max=a[0];
    for (int i=1; i<n; i++)
    {
        if ((max == 0)||(a[i]==0))
        {
            printf("Error\n");
            
        }
        if(max = (max>a[i])){
        	return max;
		}else{
			return a[i];
		}
    }
    return max;
}

int LCM(int a[], int n)
{
	
    int multiples = maxNumber(a,n);
    for (int i=0; i<n; i++)
    {
        if (multiples % a[i] != 0)
        {
            multiples = multiples + maxNumber(a,n);
            i=-1;
        }
    }
    return multiples;
}

int checkPrimeNumber(int a)
{
   if (a <= 1) return 0;
   for (int i=2; i<a; i++)
      if (a%i==0)
         return 0;
   return 1;
}

int bai4(int a[], int n){
    int max = maxNumber(a, n);
    int i = max + 1;
    for (i = max + 1; i>max; i++){
        if (checkPrimeNumber(i) == 1)
        break;
    }
   return i;
}
