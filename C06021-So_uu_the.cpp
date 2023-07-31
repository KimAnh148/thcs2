#include <stdio.h>
#include <string.h>
int souuthe(char s[1000])
{
	int cntle=0, cntch=0;
	if(s[0] == '0') return 0;
	for(int i=0; i<strlen(s); i++)
	{
		
		if('0' <= s[i] && s[i] <='9')
		{
			if((s[i] - '0')%2 == 0)
				cntch++;
			else
				cntle++;
		}
		else return 0;
	}
	if(cntch > cntle) 
		return 1;
	else
		return 2;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char s[1000];
		scanf("%s", s);
		if(souuthe(s) == 0)
			printf("INVALID\n");
		else if(souuthe(s) == 1)
				printf("YES\n");
			else
				printf("NO\n");
	}
}
