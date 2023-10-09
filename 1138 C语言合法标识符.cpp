#include <iostream>
#include <string.h>

using namespace std;
int main() {
	string str;
	getline(cin,str);
	bool result=true;
	if(!((str[0]>='A'&&str[0]<='Z')||(str[0]>='a'&&str[0]<='z')||(str[0]=='_')))
		result=false;
	for(char c:str) {
		if(!((c>='A'&&c<='Z')||(c>='a'&&c<='z')||(c=='_')||(c>='a'&&c<='z')||(c>='0'&&c<='9')))
		result=false;
	}
	if(result){
		cout<<"yes"<<endl;
	}
	else
		cout<<"no"<<endl;
	return 0;
}