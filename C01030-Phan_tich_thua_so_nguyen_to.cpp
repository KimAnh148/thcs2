#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i;
		scanf("%d",&n);
		for (i=2;i<=n;i++) 
			while (n%i==0) 
			{
				printf("%d ",i);
				n/=i;
			}
		printf("\n");
	}
}
