#include <iostream>

using namespace std;

void convert(int n)
{
    if(n > 0)
    {
        convert(n/2);       //        调用自身，输出n/2对应的二进制数;
        cout<<n%2;          //        输出n%2;
    }
}
int main()
{
    int n;
    cin>>n;
    convert(n);
    return 0;
}