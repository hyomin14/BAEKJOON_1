#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int count[50] = {0};
	int weight[50], height[50];
	for(int i = 0; i < n; i++)
		scanf("%d %d", &weight[i], &height[i]);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			if(weight[i] < weight[j] && height[i] < height[j])		count[i]++;
	}
	
	for(int i = 0; i < n; i++)
		printf("%d ", count[i] + 1);

	return 0;
}
