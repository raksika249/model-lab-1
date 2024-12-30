#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j]){
            printf("the repetitive element is :%d",arr[i]);
            break;
            }
        }
    }
}
