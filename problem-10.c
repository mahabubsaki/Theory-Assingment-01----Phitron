#include <stdio.h>
int main()
{
    int number, i, isPrime = 1;
    scanf("%d", &number);
    if (number > 2)
    {
        for (i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                printf("Composite");
                isPrime--;
                break;
            }
        }
    }
    if (isPrime || number == 2)
    {
        printf("Prime");
    }
    return 0;
}