#include <stdio.h>
#include <string.h>
int sthg(char s[])
{
	for(int i=0; i< strlen(s)/2; i++)
		if(s[i] != s[strlen(s)-1-i])
			return 0;
	return 1;
}
int sochan(char s[])
{
	for(int i=0; i< strlen(s); i++)
		if(s[i]%2 != 0) return 0;
	return 1;
}
int main ()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char s[500];
		scanf("%s", s);
		if( sthg(s) && sochan(s))
			printf("YES\n");
		else 
			printf("NO\n");
	}
}
