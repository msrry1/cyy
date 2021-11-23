#include<stdio.h>
int main()
{
    int n,j,i;
    int a[101]={0};
    int b[101]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]<a[i])
            {
                b[i]++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
