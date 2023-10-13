#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,j,k,l;
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' '&&ch[i+1]!=' ')
        {
            if(ch[i+1]>='a'&&ch[i]<='z')
                ch[i+1]=ch[i+1]-32;
        }
    }
    if(ch[0]>='a'&&ch[0]<='z')
        ch[0]=ch[0]-32;
    puts(ch);
    return 0;
}
