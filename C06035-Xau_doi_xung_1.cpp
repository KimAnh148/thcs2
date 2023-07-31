#include <stdio.h>
#include <string.h>
int check(char a[])
{
	int cnt = 0, l = 0, r= strlen(a) - 1;
	while(l<r)
	{
		if(a[l] != a[r])
			cnt++;
		l++;
		r--;
	}
	if(strlen(a)%2 == 1 && cnt <= 1)
		return 1;
	if(strlen(a)%2 == 0 && cnt == 1)
		return 1;
	return 0;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char a[100];
		scanf("%s", a);
		if(check(a) == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
