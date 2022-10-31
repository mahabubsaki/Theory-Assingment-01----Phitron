#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n > 0)
    {
        if (n > 1)
        {
            printf("%d, ", n);
        }
        else
        {
            printf("%d", n);
            break;
        }
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n--;
        }
    }
    return 0;
}