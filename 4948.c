//Bertrand's postulate
#include <stdio.h>
int main(void)
{
	int n, state, count;
	while(1){
		scanf("%d", &n);
		if(n == 0)		break;
		count = 0;
		for(int i = n + 1; i <= 2 * n; i++){
		state = 0;							//state = 0 --> prime number
		for(int j = 2; j * j <= i; j++)
			if(i % j == 0){		
				state = 1;
				break;
			}
		if(state == 0)		count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
