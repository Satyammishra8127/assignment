#include<stdio.h>
int main()
{
    int a,b;
    for(a=1;a<=4;a++)
    {
        for(b=1;b<=5;b++)
        {
            printf("\n%d",b*a);
        }
    }
    printf("\n");
    return 0;
}
