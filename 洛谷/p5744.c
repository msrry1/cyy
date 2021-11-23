#include<stdio.h>
int main()
{
    typedef struct peixun
    {
        char *name;
        int age;
        int score;
    }xueyuan[10];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",xueyuan.name);
    }
    for(i=0;i<n;i++)
    {
        printf("%s %d %d\n",xueyuan[i].name,xueyuan[i].age,xueyuan[i].score);
    }
    return 0;
}
