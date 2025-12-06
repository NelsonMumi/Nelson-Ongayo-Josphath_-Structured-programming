#include <stdio.h>

int main()
{
    char operator;
    double digit1, digit2;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter two digits: ");
    scanf("%lf %lf", &digit1, &digit2);

    switch (operator)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf\n", digit1, digit2, digit1 + digit2);
        break;

    case '-':
        printf("%.2lf - %.2lf = %.2lf\n", digit1, digit2, digit1 - digit2);
        break;

    case '*':
        printf("%.2lf * %.2lf = %.2lf\n", digit1, digit2, digit1 * digit2);
        break;

    case '/':
        if (digit2 != 0)
            printf("%.2lf / %.2lf = %.2lf\n", digit1, digit2, digit1 / digit2);
        else
            printf("MATH ERROR! Division by zero.\n");
        break;

    case '%':
    {
        int a = (int)digit1;
        int b = (int)digit2;

        if (b != 0)
            printf("%d %% %d = %d\n", a, b, a % b);
        else
            printf("MATH ERROR! Modulus by zero.\n");
        break;
    }

    default:
        printf("Invalid operator.\n");
    }

    return 0;
}
