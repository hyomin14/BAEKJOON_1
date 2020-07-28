#include <stdio.h>
int main(void)
{
	int c;
	scanf("%d", &c);
	for(int i = 0; i < c; i++){
		int n, count = 0, sum = 0;
		double ave;
		int score[1000];
		scanf("%d", &n);
		for(int j = 0; j < n; j++)	{	
			scanf("%d", &score[j]);
			sum += score[j];
		}
		ave = sum / n;	
		for(int j = 0; j < n; j++)	{
		if (score[j] > ave)		count++;}
	
		printf("%.3f%%\n", (double)count / n * 100);
	}
	return 0;
}
