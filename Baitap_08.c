#include <stdio.h>

int main()
{
    int integer=10;
    char name = 'A';
    float yeet=2;
    double rip=4;
    long int njee=7;
    long double jeez=6;
    printf("Size of int data type : %d\n",sizeof(int));
    printf("Integer : %d\n",integer);
    printf("Size of char data type : %d\n",sizeof(char));
    printf("Character : %c\n",name);
    printf("Size of float data type : %d\n",sizeof(float));
    printf("Float : %f\n",yeet);
    printf("Size of double data type : %d\n",sizeof(double)); 
    printf("Double : %lf\n",rip);
    printf("Size of long int data type : %d\n",sizeof(long int));
    printf("Long Int : %ld\n",njee);
    printf("Size of long double data type : %d\n",sizeof(long double));
    printf("Long Double : %lf",jeez);

    return 0;
}
