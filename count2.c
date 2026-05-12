#include <stdio.h>
int main()
{
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);
    while (n != 0)
    {
        n /= 10; // Remove the last digit
        count++; // Increment the counter
    }
printf("Total digits: %d\n", count);
return 0;
}