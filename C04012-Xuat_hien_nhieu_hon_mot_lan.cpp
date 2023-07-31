#include <stdio.h>
int main() {
    int n, i, j, count;
    int arr[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
		scanf("%d", &arr[i]);
	int ans[100], ans_size = 0;
    for(i = 0; i < n; i++) 
	{
        count = 1;
        for(j = i + 1; j < n; j++) 
            if(arr[i] == arr[j]) 
                count++;
        if(count > 1) 
		{
            int check = 0;
            for(j = 0; j < ans_size; j++) 
				if(ans[j] == arr[i]) 
				{
                    check = 1;
                    break;
                }
            if(check == 0) 
			{
                ans[ans_size] = arr[i];
                ans_size++;
            }
        }
    }
    if(ans_size == 0) 
        printf("0");
    else 
	{
        for(i = 0; i < ans_size; i++) 
            printf("%d ", ans[i]);
    }
    
    return 0;
}




