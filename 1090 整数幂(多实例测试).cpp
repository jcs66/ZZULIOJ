#include <iostream>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a>>b;
        int s = 1;
        while(b>0) {
            if(b%2==1){
                s=(s*a)%1000;
            }
            a=(a*a)%1000;
            b = b / 2;
        }
        cout<<s<<endl;
    }
    return 0;
}
