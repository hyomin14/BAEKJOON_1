#include <stdio.h>

long long sum(int *a, int n);

int main(void)
{
   int n;
   scanf("%d", &n);
   int arr[n];
   for(int i = 0; i < n; i++)      scanf("%d", &arr[i]);
   printf("%lld\n", sum(arr, n));
   
   return 0;
}

long long sum(int *a, int n){
   
   long long ans = 0;
   for(int i = 0; i < n; i++)
      ans += *(a + i);         //ans += a[i];

   return ans;
}
