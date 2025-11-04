#include<stdio.h>
int main()
{
int rows = 4,i,j,k; 
    char ch;

    for (i = 1; i <= rows; i++) {
  
        for (k = 1; k <= rows - i; k++) {
            printf(" ");
        }
    
        for (j = 1; j <= i; j++) {
            ch = 'A' + j - 1; 
            printf("%c", ch);
        }
     
        for (j = i - 1; j >= 1; j--) {
            ch = 'A' + j - 1;
            printf("%c", ch);
        }
        printf("\n");
    }

    for (i = rows - 1; i >= 1; i--) {
       
        for (k = 1; k <= rows - i; k++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            ch = 'A' + j - 1;
            printf("%c", ch);
        }
 
        for (j = i - 1; j >= 1; j--) {
            ch = 'A' + j - 1;
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}