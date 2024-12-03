// Write a program to replace all Even numbers by 0 and Odd numbers by 1.
#include <stdio.h>
void main()
{
    int a[10];
    int i;
    printf("enter the elements in array");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            a[i] = 0;
        }
        else
        {
            a[i] = 1;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}