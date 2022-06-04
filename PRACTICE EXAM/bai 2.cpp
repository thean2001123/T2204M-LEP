#include <stdio.h>
#include <string.h>

void sort(char str[], int lengthStr){
	char tmp;
	for(int i = 0; i < lengthStr - 1;i++){
		for(int j = i+1; j < lengthStr -1; j++){
			if(str[i] > str[j]){
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
	}
}
int main(){
	char str[25];
	printf("Nhap chuoi:");
	gets(str);
	int lengthStr = strlen(str);
	printf("Chuoi %s ", str);
	sort(str, lengthStr);
	printf("Sap xep anphabe: %s", str);
	return 0;
}
