#include <stdio.h>
#include <conio.h>
int main(){
    int num1;
    int num2;
    int tong;
    int hieu;
    int tich;
    double thuong;
    printf("Nhap so num1 = ");
    scanf("%d",&num1);
    printf("Nhap so num2 = ");
    scanf("%d",&num2);
    tong = num1+num2;
    printf("Tong = %d\n",tong);
    hieu = num1-num2;
    printf("Hieu = %d\n",hieu);
    tich = num1*num2;
    printf("Tich = %d\n",tich);
    thuong = (float)num1/(float)num2;
    printf("Thuong = %f",thuong);
    getch();
}
