#include <iostream>
using namespace std;

int getMax(int arr[],int n){

 int max = INT8_MIN;

 for (int i = 0; i <n; i++)
 {
    if (arr[i]>max)
    {
        max = arr[i];
    }
    
 } return max;
 

}
int main()
{
   int size;
   cin >> size;
 
    int arr[100];
    for (int i = 0; i <size; i++)
    {
        cin>> arr[i];
    }
    
   cout << "Maximum Number is " << getMax(arr, size) << endl;

 return 0;

}