#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	char t=0,ch;
	int s[10001]={0},a[10001]={0},b[10001]={0},c[10001]={0};
	for(i=1;i<=n;i++)
	{
		scanf("%c",&ch);
		switch (ch)
		{
			case 'a':scanf("%d %d",&a[i],&b[i]);
						t='+';
						c[i]=a[i]+b[i];
						break;
			case 'b':scanf("%d %d",&a[i],&b[i]);
						t='-';
						c[i]=a[i]-b[i];
						break;
			case 'c':scanf("%d %d",&a[i],&b[i]);
						t='*';
						c[i]=a[i]*b[i];
						break;
		}
		fflush(stdin);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",printf("%d%c%d%d\n",a[i],t,b[i],c[i])-1);
	}
	return 0;
}
