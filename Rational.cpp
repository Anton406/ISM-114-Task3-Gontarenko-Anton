#include "Rational.hpp"
Rational::Rational(int x,int y):Pair(x,y){
    
}
Rational::Rational():Pair(){
    
}
Rational Rational::operator-(Rational const &d){
int a1 =this->a*d.b-this->b*d.a;
int b1 = this->b*d.b;
Rational res(a1,b1);
return res;
}
Rational Rational::operator+(Rational const &d){
int a1 =this->a*d.b+this->b*d.a;
int b1 = this->b*d.b;
Rational res(a1,b1);
return res;
}
Rational Rational::operator/(Rational const &d){
int a1 =this->a*d.b;
int b1 = this->b*d.a;
Rational res(a1,b1);
return res;
}
