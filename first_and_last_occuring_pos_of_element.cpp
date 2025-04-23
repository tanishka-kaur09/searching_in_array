#include<iostream>
using namespace std;

int main()
{
    int a[9]={1,2,3,3,3,3,4,5,6};
    int n=9;
    int start=0, end=n-1, mid, s=-1, t=-1, x;
    cout<<"enter target element: ";
    cin>>x;

    //first occurence of target element x
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(a[mid]==x)
        {
            s=mid;
            end=mid-1;
        }
        else if(a[mid]<x)
            start=mid+1;
        else
            end=mid-1;
    }
    
    start=0;
    end=n-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(a[mid]==x)
        {
            t=mid;
            start=mid+1;
        }
        else if(a[mid]<x)
            start=mid+1;
        else
            end=mid-1;
    }
    
    cout<<"first: "<<s<<endl<<"last: "<<t;
    return 0;
}