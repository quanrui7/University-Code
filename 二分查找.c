#include<stdio.h>
int erfen(int a[], int k,int x)
{
	int left = 1;//左边元素下标
	int right = x;//右边元素下标
	int mid = (left + right) / 2;//中间元素下标
	while(left<=right)
	{
		if (a[mid] < k)
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
		else if (a[mid] > k)
		{
			right = mid - 1;
			mid = (left + right) / 2;
		}
		else return mid; 
	}
	return -1;
}
int main()
{
	int m,n,k;
	int a[] = { 0 };
	printf("请输入查找范围:");
	scanf_s("%d%d", &m, &n);
	printf("\n请输入查找目标:");
	scanf_s("%d", &k);
	for (int j = 1; j <= n - m + 1; j++)
	{
		a[j] = m+j-1;
	}
	int x=sizeof(a);
	int ret = erfen(a, k,x);
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else printf("找到了，是第%d个数", ret);
}