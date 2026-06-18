#include <stdio.h>
int check_last_digit_odd(int n)
{
    int last = n % 10;
    if(last % 2 == 0)
        return n;
    int temp = n;
    int digits = 0;
    while(temp > 0)
    {
        digits++;
        temp = temp / 10;
    }
    int p = 1;
    int i;
    for(i = 1; i < digits; i++)
        p = p * 10;
    int first = n / p;
    first = first - 1;
    n = n % p;          
    n = first * p + n;  
    return n;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d", check_last_digit_odd(n));
}
