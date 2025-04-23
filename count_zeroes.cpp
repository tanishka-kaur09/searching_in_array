#include<iostream>
using namespace std;

int main()
{
    int a[]={1,1,1,1,0,0,0,0};
    int n=sizeof(a)/sizeof(a[0]);
    int start=0,end=n-1,mid,x=-1,y=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(a[mid]==0)
        {
            x=mid;
            end=mid-1;
        }
        else
            start=mid+1;
    }
    start=0;
    end=n-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(a[mid]==0)
        {
            y=mid;
            start=mid+1;
        }
        else
            start=mid+1;
    }
if(x==-1&&y==-1)
{
    cout<<0;
    return 0;
}
cout<<(y-x+1);
}