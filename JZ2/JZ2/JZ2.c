//JZ2 �滻�ո�
//��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ� % 20����
//���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe % 20Are % 20Happy��

#include<stdio.h>
#include<string.h>
#include <stdlib.h>

char* replaceSpace(char* s)
{
    // write code here
    char* str = (char*)malloc(90);
    int k = 0;
    int i = 0;
    if (str)//�ж�malloc��str���Ƿ�ΪNULL������C6011
    {
        *str = '\0';
        // code ...
        for (i = 0; i <= (int)strlen(s); i++)// \0���ùܣ��ַ����Զ�����(��vs2019����ô���ã�ţ������"<"����)
                                             //strlen��Ҫǿת��Ϊint�ͺ���֣�����C4018
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
    //һ�Ѿ������ڸ����ˣ������ˣ�vs2019Ҫ�����
    return 0;
}