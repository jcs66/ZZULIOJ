#include <iostream>

using namespace std;

void convert(int n)
{
    if(n > 0)
    {
        convert(n/2);       //        �����������n/2��Ӧ�Ķ�������;
        cout<<n%2;          //        ���n%2;
    }
}
int main()
{
    int n;
    cin>>n;
    convert(n);
    return 0;
}