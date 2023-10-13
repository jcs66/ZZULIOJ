#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int s_min;
//    char ch;
//    ch = getchar();
	cin.ignore();
    string str,cp_str;
    getline(cin,str);
    cp_str=str;
    s_min=str.size();
    for(int i=1;i<n;i++){
        getline(cin,str);
        if(s_min>str.size()){
            cp_str = str;
            s_min=str.size();
        }
    }
    cout<<cp_str<<endl;
    return 0;
}