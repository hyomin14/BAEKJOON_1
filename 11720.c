#include <stdio.h>

int main(void)
{
	int n, sum = 0;
	char num[100] = {0};
	scanf("%d", &n);
	scanf("%s", num);
	for(int i = 0; i < n; i++)
		sum += num[i] - '0';			//'0' ~ '9' ASCII --> 48 ~ 57
	printf("%d\n", sum);
	return 0;
}
