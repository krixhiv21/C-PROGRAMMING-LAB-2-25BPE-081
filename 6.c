#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5, total, average;
    char grade;

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5;

    if (average >= 90)
        grade = 'A';
    else if (average >= 75)
        grade = 'B';
    else if (average >= 50)
        grade = 'C';
    else
        grade = 'F';

    printf("\nTotal Marks = %.2f", total);
    printf("\nAverage = %.2f", average);
    printf("\nGrade = %c\n", grade);

    return 0;
}
