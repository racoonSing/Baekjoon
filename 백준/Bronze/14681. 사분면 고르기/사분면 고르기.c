#include <stdio.h>
int main(void)
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(a>0)
    {
        if(b>0)
        {
            printf("1");
        }
        else if(b<0)
        {
            printf("4");
        }
    }
    else if(a<0)
    {
        if(b>0)
        {
            printf("2");
        }
        else if(b<0)
        {
            printf("3");
        }
    }
    return 0;
}