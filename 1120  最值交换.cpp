//
// Created by 21530 on 2023/10/5.
//
#include <iostream>

using namespace std;


void PrintArr(int a[], int n) {
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
}

//函数返回数组a中最小元素的下标
int MinIndex(int a[], int n) {
    int temp=a[0],num=0;
    for(int i=1;i<n;i++) {
        if(temp>a[i]) {
            temp=a[i];
            num=i;
        }
    }
    return num;
}

//函数返回数组a中最大元素的下标
int MaxIndex(int a[], int n) {
    int temp=a[0],num=0;
    for(int i=1;i<n;i++) {
        if(temp<a[i]) {
            temp=a[i];
            num=i;
        }
    }
    return num;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int min= MinIndex(arr,n);
    int temp=arr[0];
    arr[0]=arr[min];
    arr[min]=temp;
    int max= MaxIndex(arr,n);

    temp=arr[n-1];
    arr[n-1]=arr[max];
    arr[max]=temp;
    PrintArr(arr,n);
    return 0;
}
