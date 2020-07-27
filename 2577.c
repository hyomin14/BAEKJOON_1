#include <stdio.h>
int main(void)
{
	int a, b, c;
	int tot, res;
	int arr[10] = {0};
	scanf("%d %d %d", &a, &b, &c);
	tot = a * b * c;
	while(tot != 0)
	{
		res = tot % 10;
		arr[res]++;
		tot /= 10;
	}
	for(int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	return 0;
}
