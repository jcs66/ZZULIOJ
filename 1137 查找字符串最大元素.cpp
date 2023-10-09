#include <iostream>
#include <string.h>

using namespace std;

int main() {
	string str;
	getline(cin,str);
	char max = str[0];
	for(char c:str) {
		if(max<c)
		   max=c;
	}
	for(char c:str) {
		cout<<c;
		if(max==c)
		   cout<<"(max)";
	}
	return 0;
}