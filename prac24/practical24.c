#include <stdio.h>

int main() {
    printf("Name :- Darsheel shiroya\n");
    printf("IDno:- 25CE116\n\n");
    char note1[200], note2[200], copyNote[200];
    int i, j;

    printf("Enter first note: ");
    fgets(note1, sizeof(note1), stdin);

    printf("Enter second note: ");
    fgets(note2, sizeof(note2), stdin);

    // Remove newline characters from input
    int len1 = 0;
    while (note1[len1] != '\0') len1++;
    if (note1[len1 - 1] == '\n') note1[len1 - 1] = '\0';
    
    int len2 = 0;
    while (note2[len2] != '\0') len2++;
    if (note2[len2 - 1] == '\n') note2[len2 - 1] = '\0';

    // Length of first note
    len1 = 0;
    while (note1[len1] != '\0') len1++;
    printf("\nLength of first note: %d\n", len1);

    // Reverse first note
    for (i = 0; i < len1 / 2; i++) {
        char temp = note1[i];
        note1[i] = note1[len1 - i - 1];
        note1[len1 - i - 1] = temp;
    }
    printf("Reversed first note: %s\n", note1);

    // Restore original by reversing again
    for (i = 0; i < len1 / 2; i++) {
        char temp = note1[i];
        note1[i] = note1[len1 - i - 1];
        note1[len1 - i - 1] = temp;
    }

    // Compare note1 and note2
    i = 0;
    while (note1[i] != '\0' && note2[i] != '\0' && note1[i] == note2[i])
        i++;

    if (note1[i] == note2[i])
        printf("Notes are identical.\n");
    else if (note1[i] > note2[i])
        printf("First note is greater than second note.\n");
    else
        printf("First note is smaller than second note.\n");

    // Copy note1 into copyNote
    i = 0;
    while (note1[i] != '\0') {
        copyNote[i] = note1[i];
        i++;
    }
    copyNote[i] = '\0';
    printf("Copied note is : %s\n", copyNote);

    // Concatenate note2 to note1
    i = 0;
    while (note1[i] != '\0') i++;
    j = 0;
    while (note2[j] != '\0') {
        note1[i] = note2[j];
        i++;
        j++;
    }
    note1[i] = '\0';
    printf("Concatenated notes: %s\n", note1);

    // Convert note2 to UPPERCASE
    i = 0;
    while (note2[i] != '\0') {
        if (note2[i] >= 'a' && note2[i] <= 'z')
            note2[i] = note2[i] - 32;
        i++;
    }
    printf("Second note in UPPERCASE: %s\n", note2);

    // Convert note2 to lowercase
    i = 0;
    while (note2[i] != '\0') {
        if (note2[i] >= 'A' && note2[i] <= 'Z')
            note2[i] = note2[i] + 32;
        i++;
    }
    printf("Second note in lowercase: %s\n", note2);

    // Capitalize words in note2
    i = 0;
    int newWord = 1;
    while (note2[i] != '\0') {
        if (note2[i] == ' ' || note2[i] == '\t' || note2[i] == '\n') {
            newWord = 1;
        } else if (newWord == 1) {
            if (note2[i] >= 'a' && note2[i] <= 'z')
                note2[i] = note2[i] - 32;
            newWord = 0;
        }
        i++;
    }
    printf("Capitalized second note: %s\n", note2);

    return 0;
}
