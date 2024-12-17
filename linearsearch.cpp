#include <iostream>
using namespace std ;

 bool search (int arr[100] ,int size, int key)
 {

   for (int i=0; i<size; i++)
   {
     if (arr[i] ==key)
     {
        return 1;
     }
     
   } 
    return 0;

 }

int main()
{
   int size;
   cin >>  size;

 
   int arr[100];

   for (int i = 0; i <size; i++)
   {
       cin >> arr[i];
   }
   
   int key;
   cin >> key;

      bool found= search(arr,size, key);
     if (found)
     {
      cout << "key is present " << key << endl;
     }
     else{
      cout << "key is absent " << key <<endl;
     }
   
    return 0;
}