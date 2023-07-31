#include <stdio.h>

int count2(int n) 
{
   int count = 0;
   while (n % 2 == 0) 
   {
      count++;
      n /= 2;
   }
   return count;
}

int main()
{
   int n, k, i;
   int count = 0; 
   
   scanf("%d %d", &n, &k);

   for (i = 2; i <= n; i++) 
   {
      count += count2(i);
   }

   if (count >= k)
      printf("Yes");
   else
      printf("No");
   return 0;
}


