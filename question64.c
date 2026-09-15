#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int findMostFrequentDigit(long long n) {
 int frequency[10] = {0};
// Handle the negative number case
 if (n < 0) {
 n = -n;
    }
// Handle the base case where the number is 0
if (n == 0) {
return 0;
 } // Extract digits and count frequencies
while (n > 0) {
       
 int digit = n % 10;
 frequency[digit]++;
 n /= 10;
 }
// Find the digit with the maximum frequency
    int max_freq = 0;
    int most_frequent_digit = 0;
  // Loop from 0 to 9 ensures that if there's a tie, 
 // the smallest digit is naturally preserved.
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > max_freq) {
  max_freq = frequency[i];
  most_frequent_digit = i;
        }
    }
 return most_frequent_digit;
}

int main() {
    long long num;
 // Read the input integer
 if (scanf("%lld", &num) == 1) {
 // Print the result
        printf("%d\n", findMostFrequentDigit(num));
    }
    return 0;
}
