#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int jumpFloor(int number) {
    // write code here
    if (number < 1)
    {
        return -1;
    }
    else if (number == 1)
    {
        return 1;
    }
    else if (number == 2)
    {
        return 2;
    }
    else
    {
        return jumpFloor(number - 1) + jumpFloor(number - 2);
    }
}

int main() 
{
    int n = 0;
    scanf_s("%d", &n);
    printf("%d", jumpFloor(n));
    return 0;
}