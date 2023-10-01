#include <stdio.h>
//
//
//   本题如果是C/C++代码提交，只需要提交vowel函数的定义部分，提交其它内容，编译出错。

int vowel(char ch)
{
    // 如果ch是元音，返回1，否则返回0
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return 1;
        default:
            return 0;
    }
}

int main()
{
    char str[1001];
    int count = 0;

    // 读取输入字符串
    gets(str);

    // 遍历字符串并统计元音字母个数
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(vowel(str[i]))
        {
            count++;
        }
    }

    // 输出结果
    printf("%d\n", count);

    return 0;
}
