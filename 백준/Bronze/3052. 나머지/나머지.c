#include <stdio.h>
int main(void)
{
    int array[11];
    int count=0;
    int exist;
    for(int i=0;i<10;i++)
    {
        scanf("%d", &array[i]);
        array[i] = array[i]%42;
    }
    for(int i=0;i<10;i++)
    {
        exist=0;
        for(int j=0;j<i;j++)
        {
            if(array[i] == array[j])
            {
                exist=1;
                break;
            }
        }
        if(exist==0)
        {
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}