#include<iostream>
using namespace std;

int main()
{
    int a[]={2,4,6,8,10,8,5};
    int n=sizeof(a)/sizeof(a[0]);
    int start=0,end=n-1,mid,h=0;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(a[mid]>a[h])
            h=mid;
        if(a[mid]>a[mid+1])
            end=mid-1;
        else
            start=mid+1;
    }
    cout<<h;
}