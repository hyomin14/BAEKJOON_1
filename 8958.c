#include <stdio.h>
#include <string.h>        //string length --> strlen()

int main(void)
{
   int n;
   int combo, score;
   char str[80];
   scanf("%d", &n);
   for(int i = 0; i < n; i++)
   {   combo = 0, score = 0;   
      scanf("%s", &str);
      for(int j = 0; j < strlen(str); j++){
      if(str[j] == 'O')   {
         combo++;
         score += combo;
         }
      else   combo = 0;
      }
      printf("%d\n", score);
   }
   
   return 0;
}
