#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(j<=a+1-i)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
