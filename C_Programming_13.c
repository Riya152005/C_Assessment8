#include <stdio.h>
int main()
{
    int n, digit, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for(;n > 0;)
    {
        digit = n % 10;
        if(digit == 1 || digit == 4 || digit == 9)
            count++;
        n = n / 10;
    }
    printf("Total = %d", count);
}
