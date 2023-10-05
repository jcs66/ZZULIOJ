#include<iostream>
#include <iomanip>
 
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<std::right<<setw(4)<<arr[i];
    }
    return 0;
}
