#include<stdio.h>

int main()
{
	int n;
	int sum = 0;
	scanf("%d", &n);
	for (int i = n; i > 0; i /= 10)
	{
		sum = sum * 10 + i % 10; //°ÑÊý×Öµ¹Ðò
	}
	if (sum == n)
		printf("YES!\n");
	else
		printf("NO!\n");

	return 0;
}