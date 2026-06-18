#include <stdio.h>
int reverse_number(int n)
{
    int rev, digit;
    for(rev = 0; n != 0; n = n / 10)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
    }
    return rev;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d", reverse_number(n));
}
