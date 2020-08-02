#include <stdio.h>

int contents[10000];
int top = 0;

int main(void)
{
	int n, num;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		char check[6];
		scanf("%s", check);

		if(check[0] == 'p' && check[1] == 'u'){
			scanf("%d", &num);
			contents[top++] = num;
		}

		if(check[0] == 'p' && check[1] == 'o'){
			if(top <= 0)	printf("-1\n");
			else			printf("%d\n", contents[--top]);
		}
		
		if(check[0] == 's'){
			printf("%d\n", top);
		}

		if(check[0] == 'e'){
			if(top <= 0)	printf("1\n");
			else			printf("0\n");
		}

		if(check[0] == 't'){
			if(top <= 0)	printf("-1\n");
			else			printf("%d\n", contents[top - 1]);
		}
	}
	return 0;
}


