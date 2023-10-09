#include <iostream>

using namespace std;
const int N=1000;
int main() {
	char a[N],b[26]={0};
	int i=0;
	while(1){
		a[i]= getchar(); 
        if (a[i] == '\n') { // 判断是否为回车符
            break;  // 跳出循环
        }
		if(a[i]>='A'&&a[i]<='Z'){
			a[i]+=32;
			b[int(a[i])-97]++;
		}
		else if(a[i]>='a'&&a[i]<='z') {
			b[int(a[i])-97]++;
		}		
		i++;	
	}
	int max=b[0],index=0;
	for(int j=1;j<26;j++) {
		if(max<b[j]) {
			max=b[j];
			index=j;
		}
	}
	cout<<char(index+97)<<endl;
}