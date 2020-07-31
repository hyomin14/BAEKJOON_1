#include <stdio.h>

int main(void)
{
	int n, num, state;			//state = 0 --> prime number
	int count = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		state = 0;
		scanf("%d", &num);
		if(num == 1)			continue;
		for(int j = 2; j < num; j++)
			if(num % j == 0){		
				state = 1;
				break;
			}
		if(state == 0)		count++;
	}
	printf("%d\n", count);
	return 0;
}
