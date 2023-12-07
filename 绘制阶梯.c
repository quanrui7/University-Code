#include<stdio.h>
int main()
{
	int i = 1, j;
	do {
		j = i;
		do {
			printf(" ");
		} while (j++ <= 9);
		j = 1;
		do {
			printf("%c", 'a');
		} while (j++ < i);
		printf("\n");
	} while (i++ <= 9);
}