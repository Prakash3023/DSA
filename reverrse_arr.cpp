#include <iostream>
using namespace std;
  
void reverse_array(int arr[],int size)
{
    int start=0;
    int end=size-1;
     while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
     cout << " Original array: ";
    for (int i = 0; i < size; i++)  
    {
        cout << arr[i] << " ";  
    }
    cout<<endl;
    
    reverse_array(arr,size);
     cout<<" Reversed array: ";
    for(int i=0;i<size;i++)
    {
        cout<< arr[i] << " ";
    }
    cout<<endl;
    return 0;
}