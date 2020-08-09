/*
삽입정렬(insertion sort)
정렬되지 않은 리스트의 첫번째 원소를 선택 -> 앞에서부터 차례대로 정렬된 리스트와 비교하여 적절한 위치에 삽입 
앞의 원소와 비교해야하기 때문에 두번째 원소인 num[1]부터 시작 
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

	for(int i = 1; i < n; i++){
		temp = num[i];
		for(int j = i - 1; j >= 0 && temp < num[j]; j--){
			num[j + 1] = num[j];
			num[j] = temp;
		}
	}

	for(int i = 0; i < n; i++)
		printf("%d\n", num[i]);

	return 0;
}
