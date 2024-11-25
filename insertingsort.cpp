#include <iostream>
using namespace std;
int main() {
    int arr[]={8,5,3,2,7,9,7};
    int n = size(arr);
    for(int i=0; i<n; i++){
        int min_idx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
