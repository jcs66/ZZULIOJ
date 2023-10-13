#include <iostream>

using namespace std;
const int N = 100;
int main() {
	int T,a[N];
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		int sum=0,count=0;
		for(int i=0;i<n;i++) {
			int j;
			cin>>j;
			if(j%2 != 0)
				a[count++]=j;
			sum+=j;
		}
		if(count%2 != 0)
			cout<<sum<<endl;
		else {
			if(count == 0) {
				cout<<0<<endl;
				continue;
			}
			int min=a[0];
			for(int i=1;i<count;i++) {
				if(a[i]<min) {
					min=a[i];
				}
			}
			cout<<sum-min<<endl;
		}	
	}
	return 0;
}