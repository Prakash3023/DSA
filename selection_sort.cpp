#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[]={2,6,5,4,3,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Original Array:"<<" ";
    printArray(arr,n);
     
    selectionsort(arr,n);

    cout<<"Sorted Array:"<<" ";
    printArray(arr,n);

  return 0;
}