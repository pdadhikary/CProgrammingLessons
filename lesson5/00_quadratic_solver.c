/*
    Take three numbers a, b and c as inputs from the user.
    These numbers represent the coefficient of a quadratic equation
    in the standard form: ax^2 + bx + c.

    The task is to find the x-intercepts of the quaratic equation
    represented by the coefficients a, b and c. Then print out the
    results.

    Qudratic Formula:

    D = b^2 - 4ac // Discriminant

    if D < 0: there are no x-intercepts
    if D = 0: there is exactly one x-intercept
    if D > 0: there are two x-intercepts

    x = (-b +/- sqrt(D))/2a
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Type in the coefficents of a quadratic equation a b c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("\n");
    double D = pow(b, 2) - 4 * a * c;

    if (D < 0) {
        printf("There are no solutions...\n");
    } else if (D == 0) {
        printf("The solution is: %.3lf\n", (-b + sqrt(D))/(2 * a));
    } else if (D > 0) {
        printf("The first solution is: %.3lf\n", (-b + sqrt(D))/(2 * a));
        printf("The second solution is: %.3lf\n", (-b - sqrt(D))/(2 * a));
    }

    return 0;
}