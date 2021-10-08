//
//  main.cpp
//  labcpp
//
//  Created by Админ on 07.10.2021.
//

#include <iostream>
using namespace std;
class Pair{//базовый класс пары
public:
int a,b;//два целых числа
Pair(int x, int y){//конструктор с параметрами
a=x;
b=y;
}
    Pair(){//конструктор по умрлчанию
        a=0;b=0;
    }
    void enter(){//ввод с клавиатуры
        cout<<"enter a,b"<<endl;
        cin>>a>>b;
    }
    void print(){//печать
        cout<<"a = "<<a<<"; b = "<<b<<endl;
    }
bool equal(){//эквивалентные ли числа ?
return a==b;
}
int mult(){//перемножение двух чисел
return a*b;
}
Pair operator -(Pair const &d){//перегруженный оператор вычитания - вычитаем такую же пару, получаем объект пары
int a1 =this->a-this->b;
int b1 = d.a-d.b;//формула по заданию
Pair res(a1,b1);
return res;
}
};
class Rational:public Pair{//наследованный класс
public:
    Rational(int x,int y):Pair(x,y){
        
    }
    Rational():Pair(){
        
    }
Rational operator-(Rational const &d){
    int a1 =this->a*d.b-this->b*d.a;
    int b1 = this->b*d.b;
    Rational res(a1,b1);
    return res;
}
Rational operator+(Rational const &d){
    int a1 =this->a*d.b+this->b*d.a;
    int b1 = this->b*d.b;
    Rational res(a1,b1);
    return res;
}
Rational operator/(Rational const &d){
    int a1 =this->a*d.b;
    int b1 = this->b*d.a;
    Rational res(a1,b1);
    return res;
}
};

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
