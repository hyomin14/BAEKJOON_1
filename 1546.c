#include <stdio.h>
int main(void)
{	int num, max = 0;
	int score[1000];
	double sum = 0;
	scanf("%d", &num);
	for(int i = 0; i < num; i++){
		scanf("%d", &score[i]);
		if(max < score[i])		max = score[i];
	}
	for(int i = 0; i < num; i++)
		sum += (double)score[i] / max * 100;
	printf("%f", sum / num);
	return 0;
}
