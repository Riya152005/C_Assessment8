#include <stdio.h>
int main()
{
    int n, a, b, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for(;n >= 10;)
    {
        a = n % 10;
        b = (n / 10) % 10;
        if(((b * 10) + a) % 2 != 0)
            count++;
        n = n / 10;
    }
    printf("Total = %d", count);
}
