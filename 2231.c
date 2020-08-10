#include <stdio.h>

void digit_sum(int n);

int main(void)
{	
	int n;			 
	scanf("%d", &n);
	digit_sum(n);
	
	return 0;
}

void digit_sum(int n){
	int sum, temp, result = 0;			//result = 0 -> ������ �������� ���� 
	for(int i = n - 54; i < n; i++){
		/*
		i = 1���� �����ؼ� �� ������ �������� ���� �� ������ �ð��� ���� ���� �ɸ�
		�� �ڸ����� �ִ밪�� 9�̰� �������� �ִ� �ڸ����� 6�ڸ��̹Ƿ� (�����ڰ� 1000000�̸� �������� 1000001��)
		(n - (9*6=54))���� (n - 1)���� ������ �����Ͽ� �����ڸ� ã���� ��
		*/
		sum = temp = i;
		while(temp > 0){
			sum += temp % 10;
			temp /= 10;
		}
		if(sum == n){
			result = i;					//������ ����
			break;
		}
	}
	printf("%d\n", result);
}
