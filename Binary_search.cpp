#include<iostream>
#include <algorithm>
using namespace std;
int binary_search(int arr[],int size,int key)
{
    int left=0;
    int right=size-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>mid)
        {
            left=mid+1;
        }
        else{
            right=mid -1;
        }
    }
    return -1;
}
int main()
{    
    int arr[]={1,4,32,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<endl;
    sort(arr,arr + size);
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
        cout<<endl;
    int result=binary_search(arr,size,5);
    if(result!=-1)
    {
        cout<<"The element is found in index"<<" "<<result;
    }
    else{
        cout<<"Element is not present in the array";
    }
    
return 0;
}