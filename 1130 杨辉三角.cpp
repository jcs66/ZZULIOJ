#include <iostream>

using namespace std;
const int N=1000; 
int main() {
	int n;
	cin>>n;
	int a[N]={0},b[N]={0};
	a[1]=1;
	for(int i=1;i<n+1;i++) {
		for(int j=1;j<i+1;j++) {
			b[j]=a[j-1]+a[j];
			cout<<b[j]<<" ";
		}
		for(int q=0;q<i+1;q++) {
			a[q]=b[q];
		}
		cout<<endl;
	}
	return 0;
}