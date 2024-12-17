#include<iostream>
using namespace std;

int firstoccur(int arr[], int size, int key){

     int start=0,end=size-1;

     int mid =size +(end-size)/2;

     int ans =-1;
     while(start<=end){

        if(arr[mid]==key){
           
           ans= mid ;
           end = mid -1;
        }

        if(key > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid =start + (end - start)/2;
     }
     return ans;
}
int lastoccur(int arr[], int size, int key){

     int start=0,end=size-1;

     int mid =size +(end-size)/2;
         
      int ans =-1;    
     while(start<=end){

        if(arr[mid]==key){
           
           ans =mid ;
           start = mid +1;
        }

        else if(key > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid =start + (end - start)/2;
     }
     return ans;
}

 int main(){
   
      int arr[7]= {2,5,5,5,5,5,8};

     int firstindex = firstoccur(arr ,7, 8);
     cout << "first occurance of 8 at index " << firstindex << endl;

    int secondindex = lastoccur(arr , 7 , 5);
    cout << "last occurance of 5 at index " << secondindex << endl;


     return 0;

 }