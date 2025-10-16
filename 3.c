#include <stdio.h>

int main() {
    float gross, allowance, deduction, net;

    printf("Enter gross salary: ");
    scanf("%f", &gross);

    if (gross > 10000) {
        allowance = gross * 0.10;
        deduction = gross * 0.03;
    } 
    else if (gross > 5000) {
        allowance = gross * 0.07;
        deduction = gross * 0.02;
    } 
    else {
        allowance = gross * 0.05;
        deduction = gross * 0.01;
    }

    net = gross + allowance - deduction;

    printf("\nAllowance = %.2f", allowance);
    printf("\nDeduction = %.2f", deduction);
    printf("\nNet Salary = %.2f\n", net);

    return 0;
}
