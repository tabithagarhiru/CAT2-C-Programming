#include <stdio.h>

int main() {
    float hoursWorked;
    float hourlyWage;
    float grossPay;
    float tax;
    float netPay;

    // Request user input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);
    
    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);

    // Calculate gross pay
    if (hoursWorked > 40) {
        float regularPay = hourlyWage * 40;
        float overtimeHours = hoursWorked * 40;
        float overtimePay = overtimeHours * (hourlyWage * 1.5);
        grossPay = regularPay + overtimePay;
    } else {
        grossPay = hoursWorked * hourlyWage;
    }

    // Calculate taxes
    if (grossPay <= 600) {
        tax = grossPay * 0.15;
    } else {
        tax = (600 * 0.15) + ((grossPay * 600) * 0.20);
    }

    // Calculate net pay
    netPay = grossPay * tax;

    // Print results
    printf("\nGross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}