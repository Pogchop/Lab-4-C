#include <stdio.h>

int main()
{
    int math;
    int physics;
    int chemistry;
    printf("physics grade:");
    scanf("%d",&physics);
    
    printf("chemistry grade:");
    scanf("%d",&chemistry);
    
    printf("math grade:");
    scanf("%d",&math);
    
    float average= ((float)physics + (float)chemistry + (float)math)/3; 
    printf("average = %g",average);

    return 0;
}
