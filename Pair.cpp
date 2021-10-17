#include "Pair.hpp"
#include <iostream>
using namespace std;
Pair::Pair(int x, int y){//конструктор с параметрами
a=x;
b=y;
}
Pair::Pair(){//конструктор по умрлчанию
        a=0;b=0;
    }
    void Pair::enter(){//ввод с клавиатуры
        cout<<"enter a,b"<<endl;
        cin>>a>>b;
    }
    void Pair::print(){//печать
        cout<<"a = "<<a<<"; b = "<<b<<endl;
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
