#include <stdio.h>
#include <math.h>
int main()
{
    float weight,height,BMI;
    printf("enter value of weight");
    scanf("%f", &weight);
    printf("enter value of height");
    scanf("%f",&height);
    if (weight>0 && height>0)
    {
        BMI = weight/(pow(height, 2));
        if (BMI<18.5)
        {
            printf("your BMI is:%.2f\n",BMI);
            printf("you are under weight");
        }
        else if (BMI>=18.5&&BMI<24.9)
        {
            printf("your BMI is:%.2f\n",BMI);
            printf("you are healthy weight");
        }
        else
        {
            printf("your BMI is:%.2f\n",BMI);
            printf("you are overweight");
        }
    }
    else
    {
        printf("the entered value is invalid");
        return 0;
    }
    return 0;
}