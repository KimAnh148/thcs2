#include <stdio.h>
#include <string.h>
int hecoso3(char s[])
{
	for(int i=0; i<strlen(s);i++)
		if(s[i] != '0' && s[i] != '1' && s[i] != '2')
			return 0;
	return 1;
}
int main ()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[18];
		scanf("%s", s);
		if(hecoso3(s)) 
			printf("YES\n");
		else 
			printf("NO\n");
		
	}
}
