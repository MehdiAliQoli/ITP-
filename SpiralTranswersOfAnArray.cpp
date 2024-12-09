#include<iostream>
using namespace std;

void  SpiralTranswese(int arr[3][3]){
    
    //SpiralTranswers Of a matrics 
    
                int k=2;
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if(i%2==0){
                cout<<arr[i][j];
            }
            else{
                while(k>=0){
                cout<<arr[i][k];
                    k--;
                }
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
    SpiralTranswese(arr);
   // print(arr);
    
}
