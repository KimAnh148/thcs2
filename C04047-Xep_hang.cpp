#include <stdio.h> 
int main () 
{ 
	int n; 
	scanf ("%d",&n); 
	int td[1000]; 
	int tgx[1000]; 
	for (int i=0;i<n;i++) 
		scanf ("%d%d",&td[i],&tgx[i]); 
	for (int i=0;i<n;i++) 
		for (int j=n-1;j>i;j--) 
			if(td[j]<td[j-1]) 
			{ 
				int temp=td[j];
				td[j]=td[j-1]; 
				td[j-1]=temp; 
				temp=tgx[j]; 
				tgx[j]=tgx[j-1]; 
				tgx[j-1]=temp; 
			} 
	int temp=td[0]; 
	for(int i=0;i<n;i++) 
	{ 
		temp+=tgx[i]; 
		if(td[i+1]>=temp) 
		temp=td[i+1]; 
	} 
	printf ("%d",temp);  
}
