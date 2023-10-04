//
// Created by 21530 on 2023/10/4.
//
#include <iostream>

using namespace std;

void insert(int a[], int n, int num) {
    int i=0;
    while(a[i]<num && i<n) {
        i++;
    }
    for(;i<n+1;n--) {
        a[n+1] = a[n];
    }
    a[i] = num;
}

void PrintArr(int a[], int n) {
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n+1],num;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cin>>num;
    insert(arr, n, num);
    PrintArr(arr, n+1);
    return 0;
}
