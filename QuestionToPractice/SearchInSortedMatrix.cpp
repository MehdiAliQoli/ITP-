#include<iostream>
using namespace std;

void  SearchInSortedMatrix(int arr[3][3] , int target){
    
    
    //brute force Approach
    
  for(int i=0; i<3; i++){
      for(int j=0;j<3; j++){
          if(arr[i][j]==target){
              cout<<"The Target is at index ( " << i << "," << j<<")";
          }
      }
  }
  
  
  
    
    
    
}



void print (int arr[3][3]){
       for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
                }
                cout<<endl;
    }
}


int main(){
     int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int target = 8;
    SearchInSortedMatrix(arr , target);
   // print(arr);
    
}
