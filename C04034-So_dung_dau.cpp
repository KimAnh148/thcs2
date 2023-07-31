#include <stdio.h>
int main ()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		int a[n], i;
		for(i=0; i<n; i++)
			scanf("%d", &a[i]);
		for (i=0; i<n; i++)
		{
			int check = 1;
			for(int j=i+1; j<n; j++)
				if(a[j] >= a[i])
				{
					check=0;
					break;
				}
			if(check==1) printf("%d ", a[i]);
		}
		printf("\n");
	}
}



