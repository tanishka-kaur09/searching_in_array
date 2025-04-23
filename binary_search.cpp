#include<iostream>
using namespace std;

int binary_search(int a[], int n, int x)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
    int mid = (start+end)/2;  
    //mid = start + (end-start)/2;   
    //for larger sized arrays to avoid error
    if(x==a[mid])
        return mid;
    if(x>a[mid])
        start=mid+1;
    if(x<a[mid])
        end=mid-1;
    }
    return -1;
}

int main()
{
    int a[10]={11,22,34,45,56,67,78,89,90,100};
    int n=10;
    cout<<"enter element to be searched ";
    int x;
    cin>>x;
    int index = binary_search(a,n,x);
    if(index<0)
        cout<<"element not found";
    else
        cout<<"the element is present at "<<index;
}

//array sorted in decreasing order

// int binary_search(int a[], int n, int x)
// {
//     int start=0;
//     int end=n-1;
//     while(start<=end)
//     {
//     int mid = (start+end)/2;  
//     if(x==a[mid])
//         return mid;
//     if(x>a[mid])
//         end=mid-1;
//     if(x<a[mid])
//         start=mid+1;
//     }
//     return -1;
// }

// int main()
// {
//     int a[10]={100,99,88,77,66,55,44,33,22,11};
//     int n=10;
//     cout<<"enter element to be searched ";
//     int x;
//     cin>>x;
//     int index = binary_search(a,n,x);
//     if(index<0)
//         cout<<"element not found";
//     else
//         cout<<"the element is present at "<<index;
// }