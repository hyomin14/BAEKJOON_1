#include <stdio.h>
int main(void)
{
	int arr[9], max, count = 0;
	for (int i = 0; i < 9; i++)
		scanf("%d", &arr[i]);
	max = arr[0];
	for (int i = 1; i < 9; i++) 
		if (max < arr[i]){
			max = arr[i];
			count = i;
		}
	printf("%d\n%d", max, count + 1);
	return 0;
}
