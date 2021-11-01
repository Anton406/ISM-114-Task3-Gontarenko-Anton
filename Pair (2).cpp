#include "Pair.hpp"
#include <iostream>
using namespace std;

Pair::Pair(int x, int y):a(x),b(y){//конструктор с параметрами

}

Pair::Pair():a(0),b(0){//конструктор по умрлчанию

}

Pair::~Pair()
{
    
}
void Pair::setA(int a){
    this->a=a;
}
void Pair::setB(int b){
    this->b=b;
}
int Pair::getA(){
    return a;
}
int Pair::getB(){
    return b;
}
bool Pair::equal(){//эквивалентные ли числа ?
    return a==b;
}

int Pair::mult(){//перемножение двух чисел
    return a*b;
}

Pair Pair::operator -(Pair const &d){//перегруженный оператор вычитания - вычитаем такую же пару, получаем объект пары
    int a1 =this->a-this->b;
    int b1 = d.a-d.b;//формула по заданию
    Pair res(a1,b1);
    return res;
}
