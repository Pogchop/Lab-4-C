#include <stdio.h>

int main()
{
    int r;
    int h;
    int w;
    int s;
    float areacircle;
    float perimetercircle;
    float areasquare;
    float perimetersquare;
    float arearegtangle;
    float perimeterregtangle;
    
    printf("Radius = \n");
    scanf("%d",&r);
    areacircle=r*r*3.14;
    printf("Area of a Circle = %f\n",areacircle);
    perimetercircle=(r+r)*3.14;
    printf("Perimeter of a Circle = %f\n",perimetercircle);
    
    printf("Height = \n");
    scanf("%d",&h);
    printf("Width = \n");
    scanf("%d",&w);
    arearegtangle=h*w;
    printf("Area of a Regtangle = %f\n",arearegtangle);
    perimeterregtangle=(h+w)*2;
    printf("Perimeter of a Regtangle = %f\n",perimeterregtangle);
    
    printf("Side = \n");
    scanf("%d",&s);
    areasquare=s*s;
    printf("Area of a Square = %f\n",areasquare);
    perimetersquare=s*4;
    printf("Perimeter of a Square = %f\n",perimetersquare);
    

    return 0;
}
