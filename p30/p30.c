#include<stdio.h>

void main(){
    printf("Name :- Darsheel shiroya\n");
    printf("IDno:- 25CE116\n\n");
    int size;
    printf("Enter Size of arr : ");
    scanf("%d",&size);
    if (size <= 0)
    {
        printf("Invild size!");
         return;
    }
    int arr[size];
    int *p;
    p =arr;
    printf("Enter Elements of arr : \n");
    for (int i = 0; i < size; i++)
    {
        if(scanf("%d",p+i) != 1){
            printf("Error");
            return;
        }
    }
    for (int i = 0; i < size; i++)
    {
        for(int j = i; j < size; j++){
            if (p[i]>p[j])
            {
                int temp;
                temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
        }
    }
    printf("Output : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",p[i]);
    }
}