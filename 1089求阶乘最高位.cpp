//
// Created by 21530 on 2023/9/29.
//
#include <iostream>
#include <math.h>
using namespace std;

int return_maxdigit(int n) {
    double result = 0;
    for (int i = 1; i <= n; i++) {
        result += log10(i);
    }
    int maxdigit = (int)pow(10,result-(int)result);
    return maxdigit;
}

int main()
{
    int n;
    cin>>n;
    int maxdigit = return_maxdigit(n);
    cout<<maxdigit<<endl;
    return 0;
}
