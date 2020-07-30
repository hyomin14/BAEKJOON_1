#include <stdio.h>
int main(void)
{	int count = 0, n, temp, res;
	scanf("%d", &n);
	temp = n;
	while(1)
	{	res = (n % 10) * 10 + (n / 10 + n % 10) % 10;
		n = res;
		count++;
		if(temp == res)		break;
	}
	printf("%d\n", count);
	return 0;
}
