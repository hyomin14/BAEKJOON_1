#include <stdio.h>

int Fibo(int n);

int main(void)
{
	int num;
	scanf("%d", &num);
	printf("%d\n", Fibo(num));	

	return 0;	
}

int Fibo(int n){
	if (n >= 2)		return Fibo(n - 1) + Fibo(n - 2);
	else			return n;
}
