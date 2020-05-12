#include <stdio.h>

int main()
{
    int top;
    int bottom;
    int height;
    float area;
    printf("Top = ");
    scanf("%d",&top);
    printf("Bottom = ");
    scanf("%d",&bottom);
    printf("Height = ");
    scanf("%d",&height);
    area = ((float)top+(float)bottom)/2*(float)height;
    printf("Area = %g",area);

    return 0;
}
