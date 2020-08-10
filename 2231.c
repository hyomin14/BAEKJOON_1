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
	int sum, temp, result = 0;			//result = 0 -> 생성자 존재하지 않음 
	for(int i = n - 54; i < n; i++){
		/*
		i = 1부터 시작해서 각 숫자의 분해합을 구할 수 있지만 시간이 조금 오래 걸림
		각 자릿수의 최대값이 9이고 생성자의 최대 자릿수가 6자리이므로 (생성자가 1000000이면 분해합은 1000001임)
		(n - (9*6=54))부터 (n - 1)까지 범위를 설정하여 생성자를 찾으면 됨
		*/
		sum = temp = i;
		while(temp > 0){
			sum += temp % 10;
			temp /= 10;
		}
		if(sum == n){
			result = i;					//생성자 존재
			break;
		}
	}
	printf("%d\n", result);
}
