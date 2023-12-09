#include<stdio.h>
int runnian(int n)
{
	if( (n % 100 != 0 && n % 4 == 0)||(n%400==0))
		return (1);
	else return (0);
}
int main()
{
	for (int i = 1000;i<=2000;i++)
	{
		if (runnian(i) == 1)
			printf("%d ", i);
	}
}