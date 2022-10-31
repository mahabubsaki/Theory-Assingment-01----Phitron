#include <stdio.h>
int main()
{
    long long int number;
    int count = 0;
    scanf("%lld", &number);
    while (number > 0)
    {
        number = (number - (number % 10)) / 10;
        count++;
    }
    printf("%d digits", count);
    return 0;
}