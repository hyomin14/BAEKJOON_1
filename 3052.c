#include <stdio.h>
int main(void)
{	int num;
	int arr[42] = {0};		//remainder  0~41 --> 42
	int res = 0;			

	for(int i = 0; i < 10; i++){
		scanf("%d", &num);
		arr[num % 42]++;
	}
	
	for(int i = 0; i < 42; i++){
		if(arr[i] != 0)		res++;
	}
	printf("%d", res);
	return 0;
}
