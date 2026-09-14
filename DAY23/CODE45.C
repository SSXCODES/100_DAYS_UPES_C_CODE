#include <stdio.h>

int main() {

   int n, i;

   float sum = 0.0;

   printf("Enter the number of terms: ");

   scanf("%d", &n);

   int numerator = 2;

   int denominator = 3;

   for (i = 1; i <= n; i++) {

       sum = sum + (float)numerator / denominator;

       numerator += 2;

       denominator += 4;

   }

   printf("Sum of the series = %.2f\n", sum);

   return 0;

}