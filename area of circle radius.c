#include<stdio.h>
int main()
{
    int A,R;
    printf("Enter R number: ");
    A=3.14*R*R;
    scanf("%d",&R);
    printf("area of circle is %d having the radius %d",A,R);
    printf("\n");
    printf("Replace %d with area & %d with radius",R,A);
    return 0;
}

