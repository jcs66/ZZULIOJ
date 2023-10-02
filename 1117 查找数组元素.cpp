#include <iostream>
#include <iomanip>

using namespace std;

int find(int a[], int n, int x) {
    for(int i=0;i<n;i++) {
        if(x == a[i]) {
            return i;
        }
    }
    return -1;
}

void del(int a[], int n, int i) {
    if (i < 0 || i >= n)
        return;
    for(i;i+1<n;i++) {
        a[i] = a[i+1];
    }
}

void PrintArr(int a[], int n) {
    for(int i=0;i<n;i++) {
        cout<< right << setw(4)<<a[i];
    }
}
int main() {
    int n;
    cin>>n;
    int a[n],x;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cin>>x;
    int num = find(a,n,x);
    if(num == -1) {
        cout<<"Not Found"<<endl;
        return 0;
    }
    else {
        del(a, n,num);
        PrintArr(a, n - 1);
        return 0;
    }
}

