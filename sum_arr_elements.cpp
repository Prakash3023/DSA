#include <iostream>
using namespace std;

int sum_element(int arr[],int size)
{
 int sum =0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout << "Array elements: ";
    for (int i = 0; i < size; i++)  
    {
        cout << arr[i] << " ";  
    }
    cout << endl;  
   int total_sum = sum_element(arr, size);  
  cout<<"The sum of all the element of the array is"<< total_sum<<endl;
    return 0;
}