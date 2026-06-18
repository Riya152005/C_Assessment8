#include <stdio.h>
int disp_sum()
{
    int i, sum = 0;
    for(i = 15; i <= 95; i = i + 10)
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
