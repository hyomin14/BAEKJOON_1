/*
선택정렬(selection sort)
정렬되지 않은 리스트에서 가장 작은 데이터의 위치 탐색 -> 정렬되지 않은 리스트의 시작 위치에 있는 원소와 교환 -> 나머지 리스트를 같은 방법으로 교체 
시간 복잡도 : O(n^2)
*/
#include <stdio.h>
int main(void)
{
	int num[1000];
	int n, smallest, temp;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	for(int i = 0; i < n; i++){
		smallest = i;
		for(int j = i + 1; j < n; j++){
			if(num[j] < num[smallest])
				smallest = j;
		}
		temp = num[i];
		num[i] = num[smallest];
		num[smallest] = temp;
	}

	for(int i = 0; i < n; i++)
		printf("%d\n", num[i]);

	return	0;
}
