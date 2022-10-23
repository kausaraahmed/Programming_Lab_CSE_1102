#include <stdio.h>
int main()
{
    int i, loop_count;
    printf("How many numbers to show: ");
    scanf("%d", &loop_count);
    printf("Numbers from 0 to %d are:\n", loop_count);
    for (i = 0; i <= loop_count; i++)
    {
        printf("=> %d\n", i);
    }
}