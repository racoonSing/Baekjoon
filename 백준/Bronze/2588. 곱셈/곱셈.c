#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	int one = b % 10;
	printf("%d\n", a * one);
	int ten = (b - one) % 100;
	printf("%d\n", a * ten/10);
	int thousand = (b - ten - one) % 1000;
	printf("%d\n", a * thousand/100);
	printf("%d\n", a * b);
	return 0;
}