#include <stdio.h>
int disp_sum()
{
    int i, sum = 0;
    for(i = 1; i <= 5; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    printf("%d", disp_sum());
    return 0;
}
