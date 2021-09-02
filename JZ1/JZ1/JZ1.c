#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int fandarr(int arr[4][4], int k, int row, int col) //’“µΩ1∑Ò‘Ú0
{
	int i = 0;
	int j = col - 1;
	while (i <= row-1 && j >= 0) 
	{
		if (k == arr[i][j])
		{
			return 1;
		}
		if (k < arr[i][j])
		{
			j--;
		}
		else
		{
			i++;
		}
	}
	return 0;
}




int main() 
{
	int arr[4][4] = { { 1,2,8,9,} ,{2,4,9,12},{4,7,10,13},{6,8,11,15} };
	int k = 0;
	scanf_s("%d", &k);
	int farr = fandarr(arr, k, 4, 4);
	printf("%d", farr);

	return 0;
}