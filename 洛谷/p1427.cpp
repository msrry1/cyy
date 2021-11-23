#include<stdio.h>
int main()
{
    int n[101]={0},i=0,sum=0;
    while(1)
    {
        scanf("%d",&n[i]);
        sum++;
        if(n[i]==0)
            break;
        i++;
    }
    for(i=sum-2;i>=0;i--)
    {
        printf("%d ",n[i]);
    }
    
    return 0;
}
