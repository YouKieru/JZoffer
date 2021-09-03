#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//暴力遍历
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
//    // write code here
//    //1 2 3 4 5
//    //3 4 5 1 2
//    //1 1 1 1 1
//    int i = 0;
//    if (rotateArrayLen == 0)
//        return 0;
//    for (i = 0; i < rotateArrayLen - 1; i++)
//    {
//        if (rotateArray[i] > rotateArray[i + 1])
//            return rotateArray[i + 1];
//    }
//    return rotateArray[0];
//}
//二分
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen)
{
    if (rotateArrayLen == 0)
        return 0;
    int left = 0;
    int right = rotateArrayLen - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (rotateArray[mid] > rotateArray[right])
        {
            left = mid + 1;
        }
        else if (rotateArray[mid] < rotateArray[right])
        {
            right = mid;
        }
        else
            --right;
    }
    return rotateArray[left];
}


int main() 
{
    int arr[10] = { 3,4,5,1,2 };//牛客网的用例多
    int sz = sizeof(arr) / sizeof(arr[0]);
    int a = minNumberInRotateArray(arr, sz);
    printf("%d", a);
    return 0;
}