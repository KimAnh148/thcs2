#include<stdio.h> 
#include<math.h> 
int thng (int n)
{ 
	int m=n; 
	int dao = 0; 
	for (m;m>0;m/=10)dao = dao*10+m%10; 
	if (dao==n) return 1;
	else return 0; 
} 
int tong10(int n) 
{ 
	int tong=0; 
	for(n;n>0;n/=10) tong+=n%10;  
	if(tong%10==0)return 1; 
	else return 0; 
} 
int khac4(int n) 
{ 
	int t; 
	for(n;n>0;n/=10)
	{ 
		t=n%10; 
		if(t==4) return 0;  
	} return 1; 
} 
int main () 
{ 
	int t; 
	scanf("%d",&t); 
	while(t--) 
	{ 
		int n; 
		scanf("%d",&n); 
		for(int i=pow(10,n-1);i<pow(10,n);i++) 
		{if(khac4(i) && thng(i) && tong10(i)) { printf("%d ",i); } }
		 printf("\n"); 
	} 
}
