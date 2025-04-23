#include<iostream>
using namespace std;

int main()
{
    int a[]={1,1,1,1,1,1,1,2,2,2,2,3,3,3,3,3,3};
    int n=sizeof(a)/sizeof(a[0]);
    int target;
    cout<<"enter target value";
    cin>>target;
    int start=0,end=n-1,mid,x=-1,y=-1;
    while(start<=end)
    {   
        mid=start+(end-start)/2;
        if(a[mid]==target)
        {
            x=mid;
            end=mid-1;
        }
        else if(a[mid]<target)
            start=mid+1;
        else
            end=mid-1;
    }
    start=0,end=n-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(a[mid]==target)
        {
            y=mid;
            start=mid+1;
        }
        else if(a[mid]<target)
            start=mid+1;
        else
            end=mid-1;
    }
    if(x==-1&&y==-1)
    {
        cout<<0;
        return 0;
    }
    cout<<y-x+1;
}