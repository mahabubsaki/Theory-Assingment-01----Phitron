#include <stdio.h>
int main()
{
    int input, i;
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        if (i == input)
        {
            printf("%d.", i);
        }
        else if (input % i == 0)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}