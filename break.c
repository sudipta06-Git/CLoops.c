#include <stdio.h>
int main()
{
    int n, a = 0;
    printf("Enter number:");
    scanf("%d", &n);
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n == 1)
        printf("Number is not prime or nor composite");
    else if (a == 0)
        printf("Number is prime");
    else
        printf("Number is composite");

    return 0;
}