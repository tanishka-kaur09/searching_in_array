#include<iostream>
using namespace std;

int main()
{
    int a[]={5,6,7,8,1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    int ans=a[0];
    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(a[mid]>=a[0])  
            start=mid+1;
        else
        {
            if(a[mid]<ans)
                ans=a[mid];
            end=mid-1;     
        }    
    }
    cout<<ans;
    
}