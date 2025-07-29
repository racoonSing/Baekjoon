#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int N, M;
    int i, j, k;
    int array[101] = { 0, };
    scanf("%d %d", &N, &M);
    for (int a = 0; a < M; a++)
    {
        scanf("%d %d %d", &i, &j, &k);
        for (int a = i-1; a < j; a++)
        {
            array[a] = k;
        }
    }
    for (int a = 0; a < N; a++)
    {
        printf("%d ", array[a]);
    }
    return 0;
}