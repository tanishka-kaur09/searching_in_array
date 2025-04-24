#include<iostream>
using namespace std;

int main()
{
    int a[5]={1,2,3,5,6};
    int n=5;
    int start=0,end=n-1, mid,x;
    int index=n;
    cout<<"enter target element";
    cin>>x;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(a[mid]==x)
        {
            index=mid;
            break;
        }
        else if(a[mid]>x)
        {
            end=mid-1;
            index=mid;        
        }
        else
            start=mid+1;
    }
    cout<<index;

}