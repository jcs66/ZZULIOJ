//
// Created by 21530 on 2023/10/5.
//

#include <iostream>

using namespace std;

void fun(int *p,int num) {
    if(num>0) {
        (*p)+=6*num+5;
    }
    else if(num==0)
        (*p)+=5;
    else {
        (*p)+=4*(-num)+5;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int time=0;
    int m=0;
    for(int j=0;j<n;j++) {
        fun(&time,arr[j]-m);
        m=arr[j];
    }
    cout<<time<<endl;
    return 0;
}