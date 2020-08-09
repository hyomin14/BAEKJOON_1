/*
버블정렬(bubble sort)
서로 인접한 두 원소를 비교하여 큰 수를 뒤로 보내는 정렬 
시간 복잡도 : O(n^2)
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

