#include<stdio.h>

int main(){
    printf("Name :- Darsheel shiroya\n");
    printf("IDno:- 25CE116\n\n");
    
    int attendedId[9];
    int Sum = 0;
    int size;
    
    printf("Enter Size : ");
    scanf("%d",&size);
    
    int expectedSum = size*(size+1)/2;
    for (int i = 0; i < size-1; i++)
    {
        printf("Enter Id : ");
        scanf("%d",&attendedId[i]);
        Sum += attendedId[i];
    }
    printf("Missing Id : %d", expectedSum - Sum );
    return 0;
}