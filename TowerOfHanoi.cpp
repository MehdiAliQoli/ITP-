#include <iostream>
using namespace std;

void TOH(int n , char src , char aux , char dis){
    if(n==1){
        cout<<"Move the dist  "<<n<<"  from "<<src<<"To "<< dis<<"\n";
        return;
    }
    
    TOH(n-1 , src ,dis   , aux);
     cout<<"Move the dist  "<<n<<"  from "<<src<<"To "<<dis<<"\n";
    TOH(n-1 , aux ,src , dis);
}
int main() {
  int n;
  cout<<"Enter the No of Dist  :  ";
  cin>>n;
  TOH(n , 'A' , 'B' , 'C');

    return 0;
}
