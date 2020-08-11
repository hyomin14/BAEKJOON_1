//Croatia alphabet
#include <stdio.h>
#include <string.h>
int main(void)
{	
	int count = 0, length;
	char str[101] = {'\0'};
	scanf("%s", str);
	length = strlen(str);
	for(int i = 0; i < length; i++){
		if(str[i] == 'c'){
			if(str[i+1] == '=' || str[i+1] == '-'){
				count++;
				i += 1;
			}
			else
				count++;
		}
		else if(str[i] == 'd'){
			if(str[i+1] == 'z' && str[i+2] == '='){
				count++;
				i += 2;
			}
			else if(str[i+1] == '-'){
				count++;
				i += 1;
			}
			else count++;
			
		}
		else if(str[i] == 'l' && str[i+1] == 'j'){
			count++;
			i += 1;
		}
		else if(str[i] == 'n' && str[i+1] == 'j'){
			count++;
			i += 1;
		}
		else if(str[i] == 's' && str[i+1] == '='){
			count++;
			i += 1;
		}
		else if(str[i] == 'z' && str[i+1] == '='){
			count++;
			i += 1;
		}
		else	
			count++;
	}
	printf("%d\n", count);
	return 0;
}
