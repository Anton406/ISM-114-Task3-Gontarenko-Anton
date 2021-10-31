#include <iostream>
#include "Rational.hpp"
using namespace std;

int main() {
    cout<<"enter a,b"<<endl;
    float a,b;
    cin>>a>>b;
    Rational x(a,b);
    cout<<"enter a,b"<<endl;
    cin>>a>>b;
    Rational y(a,b);
    Rational sum = x+y;
    Rational sub = x-y;
    Rational div = x/y;
    cout<<"x+y = ";  cout<<"a = "<<sum.getA()<<"; b = "<<sum.getB()<<endl;
    cout<<"x-y = ";  cout<<"a = "<<sub.getA()<<"; b = "<<sub.getB()<<endl;
    cout<<"x/y = ";  cout<<"a = "<<div.getA()<<"; b = "<<div.getB()<<endl;
    return 0;
}
