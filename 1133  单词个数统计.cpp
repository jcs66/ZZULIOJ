#include<iostream>
#include<string.h>
int main()
{
    char ch[1000];
    int i,j,k,l;
    gets(ch);
    int num =0;
    for(i=0;ch[i]!='\0';i++)
    {
         
        if(ch[i]==' '&&(ch[i+1]>='A'&&ch[i+1]<='Z'||ch[i+1]>='a'&&ch[i+1]<='z'))
        {
            num++;
        }
    }
    if(ch[0]>='A'&&ch[0]<='Z'||ch[0]>='a'&&ch[0]<='z')
        num++;    
    std::cout<<num<<std::endl;
    return 0;
}
