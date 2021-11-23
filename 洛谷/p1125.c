#include<stdio.h>
#include<string.h>
int main()
{
    int i,num[26]={0},max=0,min=26,n;
    char s[51]="";
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        num[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(num[i]!=0)
        {
            max=max>num[i]?max:num[i];
            min=min>num[i]?num[i]:min;
        }
    }
    int t=max-min;
    if(t<2)
    {
    	printf("No Answer\n");
       	printf("0");
	}
    for(i=2;i<t;i++)
    {
        if(t%i==0)
        {
        	printf("No Answer\n");
       		printf("0");
        	break;
		}
	}
    printf("Lucky Word\n");
    printf("%d",t);
    return 0;
}
