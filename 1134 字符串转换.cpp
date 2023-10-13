#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char c = '0';
	char s[101];
	int i = 0;//i代表这个数是几位数 
	while (c != '\n')
	{
		c = getchar();
		if (c >= 48 && c <= 57)
		{
			s[i] = c;
			i++;
		}
	} 
	int number = 0;
	int k = i, j;//声明一个k来记录位数 
	
	for (j = 0; j < k; j++, i--)
	{
		number += (s[j]-'0') * (int)pow(10, i-1);//10的（位数-1）次方 
	}
	
	printf("%d", 2 * number);
	
	return 0;	
}