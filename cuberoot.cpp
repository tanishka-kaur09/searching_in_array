#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    if(n<2)
    {
        cout<<n;
        return n;
    }
    int start=0,end=n-1,ans=0,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        long long midcubed=(long long)mid*mid*mid;
        if(midcubed==n)
        {
            ans=mid;
            break;
        }
        else if(midcubed<n)
        {
            ans=mid;
            start=mid+1;
        }
        else
            end=mid-1;
    }
    cout<<ans;
}