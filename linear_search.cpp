#include <iostream>
using namespace std;

int linearSearch(int arr[],int n,int x)
{
    for (int i=0 ;i<n ;i++)
    {
        if(arr[i]==x)
        {
            return i;   //returning index of element
        }
    }
    return -1;  //element not found
}

int main()
{
    int arr[5]={1,2,34,23,67};
    int n=5;
    cout<<"enter element to be searched";
    int x;
    cin>>x;
    int ans;
    ans=linearSearch(arr,n,x);
    if (ans != -1) 
    {
        cout<<"Element found at index: " << ans << endl;
    } 
    else 
    {
        cout<<"Element not found." << endl; 
    }
}

