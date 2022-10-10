#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if((a/2)*2==a)
    {
        printf("even ");
    }
    else
    {
        printf("odd");
    }
}
