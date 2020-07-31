#include <stdio.h>

int main(void)
{
	int state;			//state = 0 --> prime number
	int sum = 0;
	int min = 10000;			
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);

	for(int i = m; i <= n; i++){
		state = 0;
		if(i == 1)			continue;
		for(int j = 2; j < i; j++)
			if(i % j == 0)		{
				state = 1;
				break;
			}
		
		if(state == 0){
			if(min > i)		min = i;
			sum += i;
		}
	}

	if(sum == 0)		printf("-1\n");
	else				printf("%d\n%d\n", sum, min);
	return 0;
}
