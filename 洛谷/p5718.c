#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[1000]={0},min=0;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            min=a[0];
        }
        scanf("%d",&a[i]);
        min=min<a[i]?min:a[i];
    }
    printf("%d",min);
    return 0;
}
