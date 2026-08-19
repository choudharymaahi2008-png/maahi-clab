#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
 {
        printf("Invalid input.\n");
        return 1;
    }

    // A quadratic equation must have a non-zero 'a' coefficient
    if (a == 0) 
{
        printf("Invalid quadratic equation (coefficient 'a' cannot be 0)\n");
        return 1;
    }
    discriminant = (b * b) - (4 * a * c);

      if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nCategory: Roots are Real and Distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } 
    else if (discriminant == 0) {

        root1 = root2 = -b / (2 * a);
        
        printf("\nCategory: Roots are Real and Equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } 
    else {
        // Category 3: Complex (Imaginary) Roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        
        printf("\nCategory: Roots are Complex and Imaginary.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
