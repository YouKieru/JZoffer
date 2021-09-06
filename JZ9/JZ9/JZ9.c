#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int jumpFloorII(int number)
{
	if (number == 0)
		return 1;
	else if (number == 1)
		return 1;
	else
		return 2 * jumpFloorII(number - 1);
	//由 f(n)=f(1)+f(2)+...+f(n-2)+f(n-1)
	//再由 f(n-1)=f(1)+f(2)+...+f(n-3)+f(n-2)
	//依次类推，总结 f(n)=2*f(n-1)
}



int main() 
{
	int a = 0;
	scanf_s("%d", &a);
	printf("%d",jumpFloorII(a));

	return 0;
}