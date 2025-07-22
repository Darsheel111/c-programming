#include <stdio.h>
void main()
{
float BMI, height, weight;
printf("enter your height: ");
scanf("%f",&height);
printf("enter your weight: ");
scanf("%f",&weight);
if (weight>0 & height>0);
BMI=weight/pow(height,2);
else
    printf("invalid input");
if (weight<18.5)
printf("person is underweight");
return 0;

else if(weight>=18.5 & weight<=24.9)
printf("person is heathy weight");

else
    printf("person is overweight");

printf("your BMI is : %.2f",BMI);
return 0;
}
