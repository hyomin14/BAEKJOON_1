#include <stdio.h>

int contents[100000];
int top = 0;

int main(void)
{
	int k, num, sum = 0;
	scanf("%d", &k);
	for(int i = 0; i < k; i++){
		scanf("%d", &num);
		if (num != 0)	contents[top++] = num;
		else			contents[--top] = 0;
	}

	for(int i = 0; i < top; i++){
		sum += contents[i];
	}
	printf("%d\n", sum);
	return 0;
}
