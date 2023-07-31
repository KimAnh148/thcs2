#include <stdio.h>
int main(){
	int x, nam, tuan, ngay;
	scanf("%d",&x);
	nam=x/365;
	tuan=(x-(nam*365))/7;
	ngay=x-(nam*365)-(tuan*7);
	printf("%d %d %d", nam, tuan, ngay);
}
