#include <stdio.h>
#include <string.h>

int main(void)
{
	int count[26];
	char ch[101];

	for(int i = 0; i < 26; i++)
		count[i] = -1;
	scanf("%s", ch);

	for(int i = 'a'; i <= 'z'; i++){
		for(int j = 0; j < strlen(ch); j++)
			if(ch[j] == i){
				count[i - 97] = j;
				break;
			}
	}

	for(int i = 0; i < 26; i++)
		printf("%d ", count[i]);
	printf("\n");
	return 0;
}
