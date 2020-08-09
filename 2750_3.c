/*
��������(selection sort)
���ĵ��� ���� ����Ʈ���� ���� ���� �������� ��ġ Ž�� -> ���ĵ��� ���� ����Ʈ�� ���� ��ġ�� �ִ� ���ҿ� ��ȯ -> ������ ����Ʈ�� ���� ������� ��ü 
�ð� ���⵵ : O(n^2)
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
