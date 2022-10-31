#include <stdio.h>
int main()
{
    int first, second;
    printf("Enter the first Number: ");
    scanf("%d", &first);
    printf("Enter the second Number: ");
    scanf("%d", &second);
    if (first % second == 0)
    {
        printf("The first number is divisible by the first number.");
    }
    else if (second % first == 0)
    {
        printf("The second number is divisible by the second number.");
    }
    else
    {
        printf("None of them are divisible by the other.");
    }
    return 0;
}