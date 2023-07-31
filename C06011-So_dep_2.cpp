#include <stdio.h>
#include <string.h>
int sodep2(char s[])
{
	int len=strlen(s);
	int sum=0;
	for(int i=0; i<len; i++)
		sum+=s[i]-'0';
	if(sum%10!=0)
		return 0;
	return 1;
	if(s[0]!= '8'|| s[len-1]!='8')
		return 0;
	for(int i=0; i<len/2; i++)
		if(s[i] != s[len-1-i])
			return 0;
} 
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char s[500];
		scanf("%s",s);
		if(sodep2(s))
			printf ("YES\n");
		else
			printf("NO\n");
	}
}
