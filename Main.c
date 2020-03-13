#include <stdlib.h>
#include <stdio.h>
void swap(int* a, int* b)
{
	int o = *a;
	*a = *b;
	*b = o;
}
void sort(int n, int* a)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < (n - i); j++)
		{
			if (a[j] < a[j - 1])
			{
				swap(&a[j], &a[j - 1]);
			}
		}
	}
}
int main()
{
	int n;
	printf("write n ");
	scanf_s("%d", &n);
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
	printf("your array : ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	sort(n, a);
	printf("\n");
	printf("result : ");
	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	free(a);
	getchar();
	return 0;
}     
