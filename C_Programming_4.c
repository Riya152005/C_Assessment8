#include <stdio.h>
int disp_sum()
{
    int i, sum = 0;
    for(i = 71; i <= 79; i = i + 2)
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
