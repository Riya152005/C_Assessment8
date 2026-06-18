#include <stdio.h>
int sum_digits(int n)
{
    int sum, digit;
    for(sum = 0; n != 0; n = n / 10)
    {
        digit = n % 10;
        sum = sum + digit;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d", sum_digits(n));
}
