#include <stdio.h>
#include <math.h>
int main(){
	int m,n, scp=0;
	scanf("%d %d",&m, &n);
	int a=sqrt(m);
	a=(a*a==m)? a:a+1;
	int b=sqrt(n);
	int i;
	printf("%d\n",b-a+1);
	for(i=a;i<=b;i++){
		printf("%d\n",i*i);
	}
}
