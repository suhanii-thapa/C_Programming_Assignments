#include <stdio.h>

int main() {
    long currentPop = 312032486;
    int secondsPerYear = 365 * 24 * 60 * 60;

    long births = secondsPerYear / 7;
    long deaths = secondsPerYear / 13;
    long immigrants = secondsPerYear / 45;

    printf("%-10s %15s\n", "Year", "Population");
    printf("%-10s %15s\n", "----", "----------");

    int startYear = 2026;

    for (int year = startYear; year <= 2031; year++) {
        currentPop += births - deaths + immigrants;
        printf("%-10d %15ld\n", year, currentPop);
    }

    return 0;
}
