//
// Created by 21530 on 2023/10/7.
//
#include <iostream>

using namespace std;
const int N = 10;

int IsUpperTriMatrix(int a[][N], int n) {
    for(int i=1;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(a[i][j] != 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int n;
    cin>>n;
    int a[N][N];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    int result = IsUpperTriMatrix(a,n);
    if(result)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}