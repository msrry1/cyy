#include<stdio.h> 
#include<string.h>
int strStr(char * haystack, char * needle){
    int n1=strlen(haystack);
    int n2=strlen(needle);
    int i,j,count=0;
    if(needle==NULL)
    {
        return 0;
    }
    for(j=0;j<n1;j++)
    {
        if(haystack[j]=needle[0])
        {
            for(i=0;i<n2;i++)
            {
                if(haystack[j+i]!=needle[i])
                {
                    return -1;
                }
            }
                return j+i-2;
        }
    }
    return -1;
}
int main()
{
	char a[]="";
	char b[]="";
	printf("%d",strStr(a,b));
	
	return 0;
}
