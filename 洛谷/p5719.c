#include<stdio.h>
int main()
{
    int n,k,i,a=0,b=0;
    scanf("%d%d",&n,&k);
    float suma=0,sumb=0;
    for(i=1;i<=n;i++)
    {
        if(i<k)
        {
            sumb+=i;
            b++;
        }
        else
        {
            if(i%k==0)
            {
                suma+=i;
                a++;
            }
            else
            {
                sumb+=i;
                b++;
            }
        }
    }
    printf("%.1f %.1f",suma/a,sumb/b);
    
    return 0;
}
