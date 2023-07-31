#include <stdio.h>
int main(){
	int a,b,tong=0;
	scanf("%d %d", &a,&b);
	if(a<b){int i;
		for(i=a;i<=b;i++){tong=tong+i;}
		printf("%d",tong);}
	else{int i;
		for (i=b;i<=a;i++){tong=tong+i;}
		printf("%d",tong);}
}
