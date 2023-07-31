#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char s[100];
		scanf("%s", s);
		int dem=1;
		for(int i=0; i< strlen(s); i++)
		{
			if(s[i]==s[i+1])
				dem++;
			else
			{
				printf("%c%d", s[i], dem);
				dem=1;
			}
		}
		printf("\n");
	}
}
