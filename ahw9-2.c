#include <stdio.h>

int main(void)
{
	int a[5];
	int i, temp;
	
	for (i=0; i<5; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i=0; i<5; i++)
	{
		if (a[i]>a[i+1])
		{
			temp=a[i+1];
			a[i+1]=a[i];
			a[i]=temp;
		}
	}
	for (i=0; i<4; i++)
	{
		if (a[i]>a[i+1])
		{
			temp=a[i+1];
			a[i+1]=a[i];
			a[i]=temp;
		}
	}for (i=0; i<3; i++)
	{
		if (a[i]>a[i+1])
		{
			temp=a[i+1];
			a[i+1]=a[i];
			a[i]=temp;
		}
	}for (i=0; i<2; i++)
	{
		if (a[i]>a[i+1])
		{
			temp=a[i+1];
			a[i+1]=a[i];
			a[i]=temp;
		}
	}
	printf("sorted array:\n");

	for (i=0; i<5; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

		

