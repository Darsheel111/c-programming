#include <stdio.h>
#include <math.h>

int validTri(int a, int b, int c) {
    if (a < 0 || b < 0 || c < 0) {
        return -1;
    }
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return 1;
    } else {
        return 0;
    }
}
double TriaArea(int a, int b, int c) {
    int isValid = validTri(a, b, c);
    double s;
    double A;

    if (isValid == -1) {
        printf("Enter valid (positive) values for sides.\n");
        return 0;
    } 
    else if (isValid == 1) {
        s = (a + b + c) / 2.0;
        A = sqrt(s * (s - a) * (s - b) * (s - c));
        return A;
    } 
    else {
        printf("These sides don't form a valid triangle.\n");
        return 0;
    }
}
int main() {
    printf("Name :- Darsheel Shiroya\n");
    printf("IDno :- 25CE116\n\n");

    int a, b, c;
    printf("Enter the sides of the triangle:\n");
    printf("Side a: ");
    scanf("%d", &a);
    printf("Side b: ");
    scanf("%d", &b);
    printf("Side c: ");
    scanf("%d", &c);
    double Area = TriaArea(a, b, c);
    if (Area > 0)
        printf("Area of triangle: %.2f\n", Area);

    return 0;
}
