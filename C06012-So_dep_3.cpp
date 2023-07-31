#include <stdio.h>
#include <string.h>
int snt(int n)
{
	if(n==2||n==3||n==5||n==7)return 1;
	else return 0;
}
int sodep3(char s[])
{
	for(int i=0; i<strlen(s)-1; i++)
	{
		if(s[i]!=s[strlen(s)-1-i])
			return 0;
	}
	for(int i=0; i< strlen(s)-1;i++)
		if(!snt(s[i]-'0')) return 0;
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[500];
		scanf("%s", s);
		if(sodep3(s)) printf("YES\n");
		else printf ("NO\n");
	}
}
