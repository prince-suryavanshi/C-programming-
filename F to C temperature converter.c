#include<stdio.h>

int main()
{
float fahrenheit, centigrade;
printf("Enter the tempareture in fahrenheit:");
scanf("%f", &fahrenheit);
centigrade = (fahrenheit - 32)*5/9;
printf("tempareture in centigrade = %.2f\n", centigrade);
    return 0;
}