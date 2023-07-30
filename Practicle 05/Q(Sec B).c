#include <stdio.h>

int main() {
    int employeeNumber;
    int hoursWorked;
    int overtimeRate = 150;
    int overtimeThreshold = 40;
    int overtimePayment;
    int overtimeExceeding4000 = 0;
    int totalEmployees = 0;
    int employeesExceeding4000 = 0;
    double percentageExceeding4000;

    printf("Enter employee number: ");
    scanf("%d", &employeeNumber);

    while (employeeNumber != -999) {
        printf("Enter hours worked for employee %d: ", employeeNumber);
        scanf("%d", &hoursWorked);

        if (hoursWorked > overtimeThreshold) {
            overtimePayment = (hoursWorked - overtimeThreshold) * (overtimeRate + 50);
            if (overtimePayment > 4000)
                overtimeExceeding4000++;
        } else {
            overtimePayment = 0;
        }

        printf("Employee Number: %d\n", employeeNumber);
        printf("Overtime Payment: Rs. %d\n", overtimePayment);

        totalEmployees++;
        if (overtimePayment > 4000)
            employeesExceeding4000++;

        printf("Enter employee number (-999 to end): ");
        scanf("%d", &employeeNumber);
    }

    if (totalEmployees > 0) {
        percentageExceeding4000 = (double) employeesExceeding4000 / totalEmployees * 100;
        printf("Percentage of employees whose Overtime Payment exceeds Rs. 4000: %.2lf%%\n", percentageExceeding4000);
    } else {
        printf("No employees entered.\n");
    }
}
