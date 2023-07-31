#include <stdio.h>
int main(){
	int n, i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int a;
		scanf("%d",&a);
		int dau=a, cuoi=a%10;
		while (dau>=10) dau/=10;
		if (dau==cuoi) printf("YES\n");
		else printf("NO\n"); 
	}
}
