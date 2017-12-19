#include <stdio.h>

void combiprint(int, int, int[]);

int main()
{
	int m, n, a[10];
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);

	combiprint(n, m, a);
	printf("\n");
	return 0;
}

void combifill(int, int, int, int[], int[], int);

void combiprint(int n, int m, int a[])
{
	int data[10];
	int index = 0;
	combifill(0, n, m, a, data, index);
}

void combifill (int s, int n, int m, int a[], int data[], int index)
{
	if (index == m)
	{
		for (int i = 0; i < m; ++i)
		{
			printf("%d", data[i]);
		}
		printf("  ");
	}
	else
	{
		for (int i = s; /*i < n &&*/ m-index<=n-i; ++i)
		{
			if (index==0)
				printf("\n");
			data[index] = a[i];
			combifill(i+1, n, m, a, data, index+1);
		}
	}


}


