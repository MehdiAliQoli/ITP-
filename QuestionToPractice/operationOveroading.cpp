#include<iostream>
using namespace std;

struct complex{

double real;
double imag;


};


complex operator+(complex No1 ,complex No2){
complex res;

res.real = No1.real + No2.real;
res.imag = No1.imag + No2.imag;
return res;
}

complex operator*(complex No1 , complex No2){
    complex res;
    res.real = (No1.real * No2.real ) - (No1.imag * No2.imag);
    res.imag = (No1.imag * No2.real) + (No1.real * No2.imag);   
return res;
}

ostream& operator<<(ostream& out , complex res){
    out.precision(1);
    out<<std::fixed<<res.real <<"i  +"<<res.imag;
    return out;
}

int main () {

complex No1 , No2;
No1.real = 3;
No1.imag = 4;

No2 = {1 , 2};

complex result = No1 * No2;
cout<<result;



}
