#include<iostream>
using namespace std;

int Count(int arr[] , int size ,int tar){
    if(size==-1){
        return 0;
    }
    else{
        if(arr[size]==tar){
            return 1+ Count(arr , size-1, tar);
        }
        else{
             return  Count(arr , size-1, tar);
        }
    }
}



int main(){
    
    
    int arr[]={2,3,4,2,3,4,5,2,3,2};
    int size = sizeof arr/ sizeof arr[0];
 
cout<< Count(arr , size , 5);
}
