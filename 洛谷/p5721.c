#include<stdio.h>
int main()
{
	int n,j=1,i,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n+1-i;k++)
		{
			if(j<10)
			{
				printf("0%d",j);
				j++;
			}
			else
			{
				printf("%d",j);
				j++;
			}
		}
		printf("\n");
	}
	return 0;
}
