#include<iostream>
using namespace std;

void Rotate90deg(int arr[3][3]){
    
    //transpose the matric 
    
    for (int i=0; i<3; i++){
        for (int j=1; j<3-i; j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }
    
    //Rotate the colomn of the matric 
    
    for (int i=0; i<3; i++){
        int start = 0  , end = 2;
        while(start<end){
            swap(arr[i][start] , arr[i][end]);
        
            start ++;
            end--;
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
    Rotate90deg(arr);
    print(arr);
    
}
