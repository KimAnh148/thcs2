#include <stdio.h>
#include <math.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int i, j, a;
    for (i = 1; i < n; i++)
	{
        a = 1;
        for (j = 2; j <= sqrt(i); j++) 
		{
            if (i % j == 0) 
			{
                a += j + i / j;
            }
        }
        if (i == a && i != 1) 
            printf("%d ", i);
        
    }
}

