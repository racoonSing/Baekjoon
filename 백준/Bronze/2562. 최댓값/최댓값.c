#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int array[10];
    int temp, max;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &array[i]);
    }
    max = array[0];
    temp = 1;
    for (int i = 0; i < 9; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            temp = i + 1;
        }
    }
    printf("%d\n", max);
    printf("%d", temp);
}