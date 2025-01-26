#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter the temperature in fahrenheit:",f);
	scanf("%f",&f);
	c=(f-32.0)*5.0/9.0;
    printf("Temperature in Degree Celsius:%f",c);
     return 0;
}

