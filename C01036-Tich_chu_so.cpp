#include <stdio.h>
int main(){
	int n, sotach, t=1;
	scanf("%d",&n);
	for(;n!=0;){sotach=n%10; t*=sotach; n/=10;}
	printf("%d",t);
}
