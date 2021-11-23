#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    if((n%4==0&&n%400!=0)||(n%400==0))
    {
        count=1;
    }
    printf("%d",count);
    return 0;
}
