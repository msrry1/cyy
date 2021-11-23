#include<stdio.h>
int main()
{
    int n,q,i,j,count = 0;
    scanf("%d%d",&n,&q);
    n = n + 1;
    int b[10001] = {0};
    int left,right;
    for(i = 0;i < q;i++)
    {
        scanf("%d%d",&left,&right);
        for(j = 0;j <= n-1;j++)
        {
            if(left <= j && right >= j)
            {
                b[j] = 1;
            }
        }
    }
    for(i = 0;i <= n-1;i++)
    {
        if(b[i] == 0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}