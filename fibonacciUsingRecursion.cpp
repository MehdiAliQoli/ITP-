//fibonacchi Series using Recursion Leet Code 509


#include <iostream>
using namespace std;


int fb(int b){
  
  if(b==0||b==1){
    return b;
  }
  
  return fb(b-1) + fb(b-2);
}


int main() 
{
int s=7;
cout<<fb(s);
 
 
 
    return 0;
}
