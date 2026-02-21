#include <stdio.h>

int main() {
    double saving, balance = 0;
    int month;

    printf("Enter monthly saving: ");
    scanf("%lf", &saving);

    for(month = 1; month <= 6; month++)
        balance = (balance + saving) * 1.00417;  

    printf("Value after 6 months: %.2lf\n", balance);

    return 0;
}
