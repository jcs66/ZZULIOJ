//
// Created by 21530 on 2023/10/7.
//
#include <iostream>

using namespace std;

int main() {
    int a[100]={0};
    int m;
    while(true) {
        cin>>m;
        if(m<0)
            break;
        else
            a[m]++;
    }
    int max=a[0];
    for(int j=1;j<100;j++) {
        if(max<a[j])
            max=a[j];
    }
    for(int j=0;j<100;j++) {
        if(max == a[j])
            cout<<j<<" ";
    }
    return 0;
}