// Checking if the given array is sorted or not using recursion 


#include <iostream>
#include<vector>
using namespace std;



bool isSorted(vector<int>arr , int n){

  if(n==0 || n==1){
    return 1;
  }
  
else{
  if(arr[n-2]<=arr[n-1]){
  return isSorted(arr , n-1);
  }
  return false;
}

  }


int main() 
{

 vector<int> arr = {1,2,4,5,6};
  int n = arr.size();
 cout<< isSorted(arr , n);
 
 
    return 0;
}
