#include<stdio.h>
int main()
{
    unsigned long long n;
    int count=0;
    scanf("%llu",&n);
    while(n!=1)
    {
        count++;
        n/=2;
    }
    printf("%d",count);
    return 0;
}
