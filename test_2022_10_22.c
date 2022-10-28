#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int arr[5] = {2,4,5,3,0};
	int i = 0;
	int j = 0;
	int tmp = 0;
	for(i=0;i<4;i++)
	{
		for (j = 0; j < 4-i; j++)
		{
			if (arr[j+1]<arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\n",arr[i]);
	}

	return 0;
}