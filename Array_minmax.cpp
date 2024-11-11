 #include <iostream>
using namespace std;

int Max(int array[], int size) 
{
    int Max = array[0];  
    for(int i = 1; i < size; i++)  
    {
        if(array[i] > Max)   
        {
            Max = array[i];
        }
    }
    return Max;
}

int Min(int array[], int size) 
{
    int Min = array[0];  
    for(int i = 1; i < size; i++)  
    {
        if(array[i] < Min)   
        {
            Min = array[i];
        }
    }
    return Min;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[1000];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int maximum = Max(array, size);  
    cout << "The maximum value is: " << maximum << endl;  

    int minimum=Min(array,size);
    cout <<"THe minimum value is:"<< minimum<<endl;

    return 0;
}


/*
using builtinor predfined funnction
int Max(int array[],int size) 
{
  int maxi=INT_MAX;
  for(int i=0;i<size;i++)
  {
  maxi=max(maxi,aray[])
  }   
}
*/