#include<stdio.h>
struct people{
    char name[20];
    int chinese;
    int math;
    int english;
}emp[1001];
int main()
{
    int n,i,m=0,max=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d%d",&emp[i].name,&emp[i].chinese,&emp[i].math,&emp[i].english);
        sum=emp[i].chinese+emp[i].math+emp[i].english;
        if(sum>max)
        {
            max=sum;
            m=i;
        }
    }
    printf("%s %d %d %d",emp[m].name,emp[m].chinese,emp[m].math,emp[m].english);
    
    return 0;
}
