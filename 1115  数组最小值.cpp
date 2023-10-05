#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        b[i]=a[i];
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(b[j]>b[j+1]) {
                int temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++) {
        if (b[0] == a[i]) {
            cout << b[0] << " " << i << endl;
            break;
        }
    }
    return 0;
}
