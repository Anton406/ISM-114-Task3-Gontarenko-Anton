/**
 *  Класс  Rational описывает производный объект от Pair - пару из рациональных чисел, в данном классе так же определен конструктор по умолчанию
 *  и конструктор с параметрами - двумя числами для инициализации,
 *  опеределены перегруженные операции вычитания, сложения и деления

 *
 */
#pragma once
#include <stdio.h>
#include "Pair.hpp"
class Rational:public Pair{//наследованный класс
public:
    ~Rational();
    Rational(int x,int y);
    Rational();
    Rational operator-(Rational const &d);
    Rational operator+(Rational const &d);
    Rational operator/(Rational const &d);
};


