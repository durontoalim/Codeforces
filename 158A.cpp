#include <stdio.h>

int main()
{
 
    int n,k,count=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int counter = arr[k-1];
    for(int i=0;i<n; i++){
 
        if(arr[i]>=counter && arr[i] != 0){
            count++;
        }
    }
    printf("%d\n",count);
 
    return 0;
}