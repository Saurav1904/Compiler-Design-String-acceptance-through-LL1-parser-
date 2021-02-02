#include<stdio.h>
void main()
{
    char str[50];
    int n,i,m,j;
    char ***table[50][50][50];
    printf("Enter number of terminals\n");
    scanf("%d",&n);
    printf("Enter terminals one by one\n");
    for(i=1;i<=n;i++)
    {
        scanf("%s",&table[0][i]);
    }
    printf("Enter number of non terminals\n");
    scanf("%d",&m);
    printf("Enter non-terminals one by one\n");
    for(i=1;i<=m;i++)
    {
        scanf("%s",&table[i][0]);
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("Enter the content for %s of %s \n",table[i][0],table[0][j]);
            scanf("%s",&table[i][j]);
        }
    }
    printf("Enter String");
    scanf("%s",str);
}
