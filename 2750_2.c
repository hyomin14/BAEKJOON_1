/*
��������(insertion sort)
���ĵ��� ���� ����Ʈ�� ù��° ���Ҹ� ���� -> �տ������� ���ʴ�� ���ĵ� ����Ʈ�� ���Ͽ� ������ ��ġ�� ���� 
���� ���ҿ� ���ؾ��ϱ� ������ �ι�° ������ num[1]���� ���� 
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
