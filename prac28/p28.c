#include <stdio.h>
#include <string.h>


union Book {
    int accession_no;
    char title[50];
    char author[50];
    float price;
    int issued;  
};

int main() {
    printf("Name :- Darsheel shiroya\n");
    printf("IDno:- 25CE116\n\n");
    union Book b;

    printf("Enter accession number: ");
    scanf("%d", &b.accession_no);
    printf("Accession Number: %d\n\n", b.accession_no);

    printf("Enter book title: ");
    getchar(); 
    fgets(b.title, sizeof(b.title), stdin);
    b.title[strcspn(b.title, "\n")] = '\0'; 
    printf("Title: %s\n\n", b.title);

    printf("Enter author name: ");
    fgets(b.author, sizeof(b.author), stdin);
    b.author[strcspn(b.author, "\n")] = '\0';
    printf("Author: %s\n\n", b.author);

    printf("Enter price: ");
    scanf("%f", &b.price);
    printf("Price: ₹%.2f\n\n", b.price);

    printf("Is the book issued? (1 = Yes, 0 = No): ");
    scanf("%d", &b.issued);
    if (b.issued == 1)
        printf("Status: Issued\n");
    else
        printf("Status: Available\n");

    return 0;
}
