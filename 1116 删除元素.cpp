#include <iostream>

using namespace std;
/*删除数组a中下标为i的元素*/
void del(int a[], int n, int i) {
    if (i < 0 || i >= n)
        return;
    for(i;i+1<n;i++) {
        a[i] = a[i+1];
    }
}
/*输出数组a的前n个元素*/
void PrintArr(int a[], int n) {
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
}

int main() {
    int n,i;
    int a[n];
    cin>>n;
    for(int j=0;j<n;j++) {
        cin>>a[j];
    }
    cin>>i;
    del(a,n,i);
    PrintArr(a,n-1);
    return 0;
}