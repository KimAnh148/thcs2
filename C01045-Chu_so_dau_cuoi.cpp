#include <stdio.h>
int main()
{
	int n, d,t=0,s=1;
	scanf("%d",&n);
	d=n%10;
	if(d==0){printf("");n/=10;
	}
	else 
	{
	printf("%d",d);
	n/=10;
	}
	while(n>10)
	{
		int giua=n%10;
		t=t+giua*s;
		s*=10;
		n/=10;
	}
	printf("%d",t);
	
	while(n>10){n%10;n/=10;}
	int c=n;
	printf("%d",c);
}

