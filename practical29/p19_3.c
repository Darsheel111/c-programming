#include<stdio.h>
int main()
{
    int i,j,k,rows=5;


    for (i = rows; i >= 1; i--) {
    
        for (k = 1; k <= rows - i; k++) {
            printf(" ");
        }
       
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        for (j = 2; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

 
    for (i = 2; i <= rows; i++) {
        for (k = 1; k <= rows - i; k++) {
            printf(" ");
        }
   
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
   
        for (j = 2; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n");
return 0;
}