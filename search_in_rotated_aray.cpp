#include <iostream>
using namespace std;

int main()
{
    int a[]={4,5,6,6,7,8,9,2,4,4};
    int n=sizeof(a)/sizeof(a[1]);
    int start=0,end=n-1,mid,index=-1;
    int x;
    cout<<"enter target";
    cin>>x;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(a[mid]==x)
        {
            index=mid;
            break;
        }
        if(a[mid]<=a[mid+1] && a[mid]<a[end])
        {
            if(a[mid]<x && x<=a[end])
                start=mid+1;
            else    
                end=mid-1;
        }
        else if(a[start] <= a[mid])
        {
            if(a[start]<=x && x<a[mid])
                end=mid+1;
            else    
                start=mid-1;
        }
    }
    cout<<index;
}