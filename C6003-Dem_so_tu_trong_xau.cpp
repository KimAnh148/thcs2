#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		char a[200];
		gets(a);
		int dem=1; 
		for(int i=0; i<strlen(a)-1; i++)
			if(a[i]==' '&& a[i+1]!=' ')
				dem++;
		printf("%d\n",dem);
	}
	
}
