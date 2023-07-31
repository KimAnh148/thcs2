#include <stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	while (i--){
		int a, b, ucln=1;
		scanf("%d %d",&a, &b);
		for(int t=1;t<=a&&t<=b;t++) 
			if(a%t==0&&b%t==0) ucln=t;	
		printf("%d\n",ucln);}
	
}
