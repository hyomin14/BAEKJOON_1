#include <stdio.h>

int Factorial(int n);

int main(void)
{
	int num;
	scanf("%d", &num);
	printf("%d\n", Factorial(num));
	return 0;
}

int Factorial(int n){
	if (n > 1)		return n * Factorial(n - 1);
	else			return 1;
}
