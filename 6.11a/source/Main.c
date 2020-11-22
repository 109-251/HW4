#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, tmp;
	int a[5] = { 75,8,66,54,1};
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4-i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
		printf("Loop %d:", i);
		for (j = 0; j < 5; j++)
			printf("%4d", a[j]);
		printf("\n");
	}
	system("pause");
}