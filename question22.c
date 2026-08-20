//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float cp, sp, diff;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cp, &sp);
    if (sp > cp) 
{
        diff = sp - cp;
        printf("Profit = %.2f%%\n", (diff / cp) * 100);
    } else if (cp > sp) {
        diff = cp - sp;
        printf("Loss = %.2f%%\n", (diff / cp) * 100);
    } else {
        printf("No Profit, No Loss\n");
    }
    
    return 0;
}

