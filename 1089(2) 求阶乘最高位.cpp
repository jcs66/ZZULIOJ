//
// Created by 21530 on 2023/9/29.
//
#include <iostream>
#include <math.h>
using namespace std;

int return_maxdigit(int n) {
    double result = 1.0;
    for (int i = 2; i <= n; i++) {
        result = result*i;
        while(1) {
            if(result > 10)
                result=result/10;
            else
                break;
        }
    }
    return result;
}

int main()
{
    int n;
    scanf("%d",&n);
    int maxdigit = return_maxdigit(n);
    printf("%d\n",maxdigit);
    return 0;
}