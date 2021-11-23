#include<stdio.h>
int main()
{
    int a,b,c,t=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(a>c)
    {
        t=a;
        a=c;
        c=t;
    }
    if(b>c)
    {
        t=b;
        b=c;
        c=t;
    }
    char ch;
    fflush(stdin);
    while((ch=getchar())!='\n')
    {
        switch(ch)
        {
            case 'A':printf("%d ",a);break;
            case 'B':printf("%d ",b);break;
            case 'C':printf("%d",c);break;
        }
    }
    return 0;
}
