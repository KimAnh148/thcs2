#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		int hang=i;
		for(int j=1;j<=m;j++)
		{
			if(j<=m-i) printf("%d",hang++);
			else printf("%d",hang--);
		}
		printf("\n");
	}
	
}
