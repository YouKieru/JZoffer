//JZ2 替换空格
//请实现一个函数，将一个字符串中的每个空格替换成“ % 20”。
//例如，当字符串为We Are Happy.则经过替换之后的字符串为We % 20Are % 20Happy。

#include<stdio.h>
#include<string.h>
#include <stdlib.h>

char* replaceSpace(char* s)
{
    // write code here
    char* str = (char*)malloc(90);
    int k = 0;
    int i = 0;
    if (str)//判断malloc给str的是否为NULL，警告C6011
    {
        *str = '\0';
        // code ...
        for (i = 0; i <= (int)strlen(s); i++)// \0不用管，字符串自动补齐(但vs2019不这么觉得，牛客网上"<"就行)
                                             //strlen还要强转换为int型很奇怪，警告C4018
        {
            if (s[i] == ' ')
            {
                str[k++] = '%';
                str[k++] = '2';
                str[k++] = '0';
            }
            else
            {
                str[k++] = s[i];
            }
        }
        //free(str);
    }
    return str;

}

int main() 
{
	char arr[30] = "\0";
    gets_s(arr, 30);
    printf("%s", replaceSpace(arr));
    //一堆警告终于改完了，我吐了，vs2019要求真紧
    return 0;
}