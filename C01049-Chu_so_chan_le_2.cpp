#include <stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	while(i--){
		int n, chan=0,le=0;
		scanf("%d",&n);
		for(n;n>0;n/=10){int a=n%10; if(a%2==0) chan++;else le++;};
		printf("%d %d\n",le,chan);}
}
