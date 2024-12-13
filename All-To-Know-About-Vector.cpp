
#include<iostream>
#include<vector>
using namespace std;
int main()
{

vector <int> vec = {};
for(int i=0; i<5; i++){
    int m;
    cin>>m;
    vec.push_back(m);
}
cout<<" Orignal Vector"<<endl;
for(int ele: vec){
    cout<<ele<<" ";
}
cout<<endl;
for(int i=0; i<vec.size(); i++){
for(int j=0; j<vec.size()-i-1; j++){
if(vec[j]<vec[j+1]){
    swap(vec[j] , vec[j+1]);
}
}
}
cout<<"Sorted In Desending"<<endl;
for(int ele: vec){
    cout<<ele<<" ";
}
cout<<endl;

int n = vec.size();

vector <int> ans={};
for(int i=0; i<n; i++){
    int k=0;
for(int j=0; j<=i; j++){
    k+=vec[j];
}
    ans.push_back(k);
}
cout<<endl;
cout<<" Sum Up to Element ";
cout<<endl;
for(int e: ans){
    cout<<e<<" ";
}

for(int i=0; i<n; i++){
    if(vec[i]<5){
        vec.erase(vec.begin()+i);
       // i++;
    }
}
cout<<endl;
 
 cout<<"Removed less than 5"<<endl;
for(int ele: vec){
    cout<<ele<<" ";
}


 return 0;
}
