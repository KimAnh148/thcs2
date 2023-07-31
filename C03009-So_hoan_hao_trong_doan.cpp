#include <stdio.h>
#include <math.h>
int kt(int x)
{
	int n=1;
	for (int i = 2; i <= sqrt(x); i++) 
		{
            if (x % i == 0) 
			{
                n += i;
                if (i*i!=x)n+=x/i;
            }
        }
        if (x == n && x != 1) return 1;
        return 0;
}

int main() 
{
    int a,b;
    scanf("%d %d", &a,&b);
    if(a<b)
	for (int i = a; i <= b; i++)
	{
		if(kt(i)) printf("%d ",i);
	}
	else for(int i=b;i<=a;i++)
	{
		if(kt(i)) printf("%d ",i);
	}
	
}
