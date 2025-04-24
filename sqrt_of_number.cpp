#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"enter the number: ";
    cin>>x;
    int start=0,end=x,mid,index=0;
    while(start<=end)
    {
    mid = start + (end-start)/2;   
    if(x==mid*mid)
    {
        index=mid;
        break;
    }
    if(x>mid*mid)
    {
        index=mid;
        start=mid+1;
    }
    if(x<mid*mid)
        end=mid-1;
    }
    cout<<index;
    return index;
}