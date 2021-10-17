#include <iostream>
#include "Rational.hpp"
using namespace std;

int main() {
    Rational x;
    x.enter();
    Rational y;
    y.enter();
    cout<<"x+y = "; (x+y).print(); cout<<endl;
    cout<<"x-y = "; (x-y).print(); cout<<endl;
    cout<<"x/y = "; (x/y).print(); cout<<endl;
    return 0;
}
