#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n=0, ch=0, le=0;
		char kitu = ' ';
		while(kitu == ' ')
		{
			int a;
			scanf("%d", &a);
			n++;
			if(a%2 == 0)
				ch++;
			else
				le++;
			kitu = getchar();
		}
		if( (n%2 == 0 && ch > le) || (n%2 == 1 && ch < le) )
			printf("YES\n");
		else
			printf("NO\n");
	}
}
