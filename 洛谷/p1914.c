#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,m;
    char str[51];
    scanf("%d",&n);
    scanf("%s",str);
    m=strlen(str);
    for(i=0;i<m;i++)
    {
        str[i]=(str[i]-'a'+n)%26+'a';
    }
    printf("%s",str);
    return 0;
}
