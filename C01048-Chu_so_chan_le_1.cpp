#include <stdio.h>
int main(){
	int n,le=0,chan=0;
	scanf("%d",&n);
	while(n>0){int a=n%10; if(a%2==0) chan++;else le++;n/=10;};
	printf("%d %d",le,chan);
	}

