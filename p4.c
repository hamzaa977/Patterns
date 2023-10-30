#include<stdio.h>
int main()
{
    int n;
    int i;
    printf("Enter The Number Of ROWS :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        int j;
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
         for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}