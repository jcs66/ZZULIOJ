#include <iostream>

using namespace std;

int facsum(int n)
{
//计算n的所有正因子之和sum，本函数返回sum
    int sum = 0;
    for(int i=1;i<=n/2;i++) {
        if(n%i==0)
            sum+=i;
    }
    return sum;
}

int main()
{
    int m,n,count = 0;
    cin>>m>>n;
    for(int i=m;i<=n;i++) {
        int a = facsum(i);
        for(int j=i+1;j<=n;j++) {
            if(a == j && i == facsum(j)) {
                cout<<i<<" "<<j<<endl;
                count++;
            }

        }
    }
    if(count == 0)
        cout<<"No answer"<<endl;
    return 0;
}