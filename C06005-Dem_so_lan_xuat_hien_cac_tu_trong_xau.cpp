#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main ()
{
	char s[1000];
	gets(s);
	for(int i=0; i<strlen(s); i++)
		s[i]=tolower(s[i]);
	char a[1000][1000];
	char *token= strtok(s, " ");
	int n=0;
	while(token != NULL)
	{
		strcpy(a[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	for(int i=0; i<n; i++)
	{
		if(a[i][0])
		{
			int cnt=1;
			for(int j=i+1; j<n; j++)
			{
				if(strcmp(a[i], a[j])==0)
				{
					a[j][0] = 0;
					cnt++;
				}
			}
			printf("%s %d\n", a[i], cnt);
		}
	}
}
