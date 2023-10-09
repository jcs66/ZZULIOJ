#include <stdio.h>

int fun(int a,int b) {
	int c;
	int arr[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(b==2)
        if((a%4==0&&a%100!=0)||a%400==0)
            c=29;
        else
            c=28;
    else
        c=arr[b-1];
        return c;
}
int main()
{
    int a,b,d,sum = 0;    
    scanf("%d-%d-%d",&a,&b,&d);
    for(int i=1;i<b;i++) {
    	sum+=fun(a,i);
	}
	printf("%d",sum+d);
    return 0;
}