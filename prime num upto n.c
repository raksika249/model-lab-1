#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        int f=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        printf("%d ",i);
    }
}
