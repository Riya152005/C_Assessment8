#include <stdio.h>
int count_total_digits(int n)
{
    int count;
    for(count = 0; n != 0; n = n / 10)
    {
        count = count + 1;
    }
    return count;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d", count_total_digits(n));
}
