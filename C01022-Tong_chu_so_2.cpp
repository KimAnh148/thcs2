#include <stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{int N, sotach, s=0;
	scanf("%d",&N);
	for(;N!=0;){sotach=N%10; s+=sotach; N/=10;}
	printf("%d\n",s);}
}
