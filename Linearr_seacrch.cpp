#include <iostream>
using namespace std;
bool Linear_search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;

    int arr[10000];
    cout<<"Enter the elements of the array:";
      for(int i=0;i<size;i++)
      {
        cin>>arr[i];
      }
     int key;
     cout<<"Enter the target to search for:";
     cin>>key;

     if(Linear_search( arr,  size,  key))
     {
        cout<<"key element is found"<<endl;
     }
     else
     {
        cout<<"key element is not found"<<endl;
     }
     return 0;
}