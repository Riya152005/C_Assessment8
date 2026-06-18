#include <stdio.h>
int main()
{
    int count = 0, i;
    for(i = 1; i <= 9; i++)
    {
        if(i == 2 || i == 3 || i == 5 || i == 7)
            count++;
    }
    printf("%d", count);
}
