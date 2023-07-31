#include <stdio.h>
#include <math.h>
int main(){
	int a, N;
	scanf("%d", &a);
	while(a--){
		scanf("%d", &N);
		int x=sqrt(N);
		if(x*x==N) printf("YES\n");
		else printf("NO\n");
	}
}
