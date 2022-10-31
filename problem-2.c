#include <stdio.h>
int main()
{
    int first, second, third, fourth, largest, smallest;
    scanf("%d%d%d%d", &first, &second, &third, &fourth);
    if (first > second && first > third && first > fourth)
    {
        largest = first;
    }
    else if (second > third && second > fourth)
    {
        largest = second;
    }
    else if (third > fourth)
    {
        largest = third;
    }
    else
    {
        largest = fourth;
    }

    if (first < second && first < third && first < fourth)
    {
        smallest = first;
    }
    else if (second < third && second < fourth)
    {
        smallest = second;
    }
    else if (third < fourth)
    {
        smallest = third;
    }
    else
    {
        smallest = fourth;
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);
    return 0;
}