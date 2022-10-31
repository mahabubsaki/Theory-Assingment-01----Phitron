#include <stdio.h>
int main()
{
    int first, second, temp, x, y;
    scanf("%d%d", &first, &second);
    x = first;
    y = second;
    while (y > 0)
    {
        temp = y;
        y = (x % y);
        x = temp;
    }
    printf("The LCM of %d and %d is %d.", first, second, (first * second) / x);
    return 0;
}