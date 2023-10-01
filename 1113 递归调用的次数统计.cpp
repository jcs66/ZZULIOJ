#include<stdio.h>
int fib(int k,int* p);

int main()
{
    int n,num=0;
    scanf("%d", &n);
    printf("%d\n", fib(n,&num));
    printf("递归调用了%d次\n",num);
    return 0;
}

int fib(int k,int* p)
{
    *p = *p + 1;
    if (k == 1 || k == 2)
        return 1;
    else {
        return fib(k - 1, p ) + fib(k - 2, p);
    }
}