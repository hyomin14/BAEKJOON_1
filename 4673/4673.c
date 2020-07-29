#include <stdio.h>

#define arrMAXSIZE 10001

int SN (int n);

int main (void)
{
	int arr[arrMAXSIZE] = {0};
	int index;
	for(int i = 1; i < arrMAXSIZE; i++){
		index = SN(i);
		if (index < arrMAXSIZE)		arr[index] = 1;
	}
	
	for(int i = 1; i < arrMAXSIZE; i++){
		if(arr[i] != 1)		printf("%d\n", i);
	}
	return 0;
}

int SN (int n){
	int sum = n;
	while(n != 0){	
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
