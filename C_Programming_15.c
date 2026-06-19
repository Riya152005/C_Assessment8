#include <stdio.h>
int main()
{
    int n, digit, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for(;n > 0;)
    {
        digit = n % 10;
        if(digit == 2 || digit == 3 || digit == 5 || digit == 7)
            count++;
        n = n / 10;
    }
    printf("Total = %d", count);
}
