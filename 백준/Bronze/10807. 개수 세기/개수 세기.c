#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int* array = malloc(n * sizeof(int));
	int* pa = array;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", pa++);
	}
	int v;
	int count = 0;
	scanf("%d", &v);
	pa = array;
	for (int i = 0; i < n; i++)
	{
		if (v == *pa++)
		{
			count++;
		}
	}

	printf("%d\n", count);
	free(array);
	return 0;
}