#include <stdio.h>

int main()
{
    float C;
    float F;
    
    printf("C = ");
    scanf("%f",&C);
    
    F = (C*9)/5+32;
    
    printf("\nF = %f",F);
    return 0;
}
