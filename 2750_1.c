/*
��������(bubble sort)
���� ������ �� ���Ҹ� ���Ͽ� ū ���� �ڷ� ������ ���� 
�ð� ���⵵ : O(n^2)
*/
#include <stdio.h>
int main(void)
{
	int num[1000];
	int n, temp;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &num[i]);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - 1; j++){
			if(num[j] > num[j + 1]){
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for(int i = 0; i < n; i++)
		printf("%d\n", num[i]);

	return 0;
}

