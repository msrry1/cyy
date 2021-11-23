#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,k,num=1,l;
    for(k=0;k<n;k++)
    {
		for(i=0;i<n;i++)
    	{
			if(num<=9)
			{
				printf("0%d",num);
				num++;
			}
			else
			{
				printf("%d",num);
				num++;
			}
    	}
    	printf("\n");
    }
    printf("\n");
    num=1;
    for(k=0;k<n;k++)
    {
    	for(l=2*(n-1-k);l>0;l--)
    	{
    		printf(" ");
		}
    	for(i=1;i<2*(k+1);i=i+2)
    	{
			if(num<=9)
			{
				printf("0%d",num);
				num++;
			}
			else
				printf("0%d",num);
				num++;
			}
    	}
    	printf("\n");
	}
    return 0;
}
