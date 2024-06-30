#include <stdio.h>
#include <math.h>

const double pi = 3.14;

// Function declarations
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int fact(int a);
int mod(int a, int b);
int square(int a);
double DegreeToRadian(double degree);
double power(double a, double b);
double loga(double a);
double root(double a);

int main() {
    int choice, x, y, res;
    double degree, temp, angle, base, exp;

    while (1) {
        printf("\nCalculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("6. Modulus\n");
        printf("7. Square\n");
        printf("8. Trigonometric values\n");
        printf("9. Power\n");
        printf("10. Log(base 10)\n");
        printf("11. Root\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers\n");
                scanf("%d%d", &x, &y);
                res = add(x, y);
                printf("Addition of %d and %d is %d\n", x, y, res);
                break;

            case 2:
                printf("Enter two numbers\n");
                scanf("%d%d", &x, &y);
                res = sub(x, y);
                printf("Subtraction of %d and %d is %d\n", x, y, res);
                break;

            case 3:
                printf("Enter two numbers\n");
                scanf("%d%d", &x, &y);
                res = mul(x, y);
                printf("%d times %d is %d\n", x, y, res);
                break;

            case 4:
                printf("Enter two numbers\n");
                scanf("%d%d", &x, &y);
                res = div(x, y);
                printf("%d divided by %d is %d\n", x, y, res);
                break;

            case 5:
                printf("Enter a number\n");
                scanf("%d", &x);
                res = fact(x);
                printf("%d factorial is %d\n", x, res);
                break;

            case 6:
                printf("Enter two numbers\n");
                scanf("%d%d", &x, &y);
                res = mod(x, y);
                printf("%d %% %d yields %d as remainder\n", x, y, res);
                break;

            case 7:
                printf("Enter a number\n");
                scanf("%d", &x);
                res = square(x);
                printf("%d squared is %d\n", x, res);
                break;

            case 8:
                printf("Function Menu \n");
                printf("1. Sine\n");
                printf("2. Cosine\n");
                printf("3. Tangent\n");
                printf("4. Secant\n");
                printf("5. Cosecant\n");
                printf("6. Cotangent\n");
                printf("7. Exit\n");
                printf("Enter your choice:\n ");
                scanf("%d", &choice);

                printf("\n");
                switch (choice) {
                    case 1:
                        printf("Enter angle (in degrees)\n");
                        scanf("%lf", &degree);
                        angle = sin(DegreeToRadian(degree));
                        printf("sin(%lf) is %lf\n", degree, angle);
                        break;

                    case 2:
                        printf("Enter angle (in degrees)\n");
                        scanf("%lf", &degree);
                        angle = cos(DegreeToRadian(degree));
                        printf("cos(%lf) is %lf\n", degree, angle);
                        break;

                    case 3:
                        printf("Enter angle (in degrees)\n");
                        scanf("%lf", &degree);
                        angle = tan(DegreeToRadian(degree));
                        printf("tan(%lf) is %lf\n", degree, angle);
                        break;

                    case 4:
                        printf("Enter angle (in degrees)\n");
                        scanf("%lf", &degree);
                        temp = cos(DegreeToRadian(degree));
                        angle = 1 / temp;
                        printf("sec(%lf) is %lf\n", degree, angle);
                        break;

                    case 5:
                        printf("Enter angle (in degrees)\n");
                        scanf("%lf", &degree);
                        temp = sin(DegreeToRadian(degree));
                        angle = 1 / temp;
                        printf("cosec(%lf) is %lf\n", degree, angle);
                        break;

                    case 6:
                        printf("Enter angle (in degrees)\n");
                        scanf("%lf", &degree);
                        temp = tan(DegreeToRadian(degree));
                        angle = 1 / temp;
                        printf("cot(%lf) is %lf\n", degree, angle);
                        break;

                    case 7:
                        printf("Exiting...\n");
                        return 0;

                    default:
                        printf("Invalid choice.\n");
                }
                break;

            case 9:
                printf("Enter base and exponent\n");
                scanf("%lf%lf", &base, &exp);
                temp = power(base, exp);
                printf("%lf^%lf = %lf\n", base, exp, temp);
                break;

            case 10:
                printf("Enter argument\n");
                scanf("%lf", &base);
                temp = loga(base);
                printf("log(%lf) = %lf\n", base, temp);
                break;

            case 11:
                printf("Enter a number\n");
                scanf("%lf", &base);
                temp = root(base);
                printf("Root(%lf) = %lf\n", base, temp);
                break;

            case 12:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    } else {
        return a / b;
    }
}

int fact(int a) {
    if (a == 0) {
        return 1;
    } else if (a < 0) {
        printf("Enter a positive number\n");
        return 0;
    } else {
        int x = 1;
        for (int i = 1; i <= a; ++i) {
            x *= i;
        }
        return x;
    }
}

int mod(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    } else {
        return a % b;
    }
}

int square(int a) {
    return a * a;
}

double DegreeToRadian(double degree) {
    return degree * (pi / 180);
}

double power(double a, double b) {
    return pow(a, b);
}

double loga(double a) {
    return log10(a);
}

double root(double a) {
    return sqrt(a);
}
