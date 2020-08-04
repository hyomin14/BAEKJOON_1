#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool arr[1000001] = {1, 1, 0};			//false --> prime number		
	int m, n;
	scanf("%d %d", &m, &n);

	for(int i = 2; i <= n; i++){
		if(arr[i] == 0)
			for(int j = 2; i * j <= n; j++)
					arr[i * j] = 1;		
	}

	/*
	for(int i = 2; i * i <= n; i++){
		if(arr[i] == 0)
			for(int j = i; j <= n; j += i){
				if(j != i)		arr[j] = 1;
			}
	}
	*/

	for(int i = m; i <= n; i++)
		if(!arr[i])		printf("%d\n", i);

	return 0;
}
