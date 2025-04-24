#include<iostream>
using namespace std;

int main()
{
    int a[]={5,1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    int start=0,end=n-1,mid,x;
    cout<<"enter taget value";
    cin>>x;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(a[mid]==x)
            break;
        else if(a[mid]>=a[start])
        {
            if(x<=a[mid]&&x>=a[start])
                end=mid-1;
            else
                start=mid+1;
        }
        else
        {
            if(a[mid]<x&&x<=a[end])
                start=mid+1;
            else    
                end=mid-1;
        }
    }
    
    if(a[mid]==x)
        cout<<mid;
    else
        cout<<-1;
}