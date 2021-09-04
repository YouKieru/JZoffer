#include <stdio.h>
int main() 
{
	int a = 0;
	scanf_s("%d", &a);
	int i = 0, t1 = 0, t2 = 1, temp = 0;
	for (i = 0; i < a; i++) 
	{
		temp = t1 + t2;
		t1 = t2;
		t2 = temp;
	}
	printf("%d", t1);
}
//#include <stdio.h>
//int fbnq(int n)
//{
//	if (n == 0 || n == 1)
//		return n;
//	int i = 0;
//	int t1 = 0;
//	int t2 = 1;
//	int temp = 0;
//	for (i = 2; i <= n; i++)
//	{
//		temp = t1 + t2;
//		t1 = t2;
//		t2 = temp;
//	}//0 1 1 2 3 5 8
//	return temp;
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	printf("%d", fbnq(n));
//	return 0;
//}