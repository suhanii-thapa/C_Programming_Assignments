#include <stdio.h>

int main()
{
    double c, f;

    printf("Enter Celsius: ");
    scanf("%lf", &c);

    f = 1.8 * c + 32;   

    printf("Fahrenheit = %.2lf", f);

    return 0;
}
