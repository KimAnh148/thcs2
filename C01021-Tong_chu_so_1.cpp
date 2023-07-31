#include <stdio.h>
int main(){
	int n, sotach, s=0;
	scanf("%d",&n);
	for(;n!=0;){sotach=n%10; s+=sotach; n/=10;}
	printf("%d",s);
}
