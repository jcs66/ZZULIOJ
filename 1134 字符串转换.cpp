#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[1000];
    string s="";
    int i,j,k,l;
    gets(ch);
    int sum = 0;
    for(i = 0;ch[i]!='\0';i++)
    {
    	
        if(ch[i]>='0'&&ch[i]<='9')
        {
            s+='ch[i]';
        }
    }
    sum = 2*(int)s;  
    cout<<num<<endl;
    return 0;
}