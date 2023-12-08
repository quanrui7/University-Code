#include<stdio.h>
int main()
{
	int original,reverse=0,n;
	scanf_s("%d", &original);
	n = original;
		
		do{
			
			original = reverse + n;
			reverse = 0;
			n = original;
			while (original != 0)
			{
				reverse = reverse * 10 + original % 10;
				original = original / 10;
			}
			
		} while (reverse != n);
		printf("%d", reverse);
}