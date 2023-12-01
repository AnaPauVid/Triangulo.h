#ifndef Triangulo_h
#define Triangulo_h

#include <stdio.h>
#include "Point.h"


class Triangulo{
private:
    Point v1, v2, v3;

public:
    Triangulo();
    Triangulo(Point _v1, Point _v2, Point _v3);

    Point getVertice1();
    Point getVertice2();
    Point getVertice3();

    void setVertice1(Point _v1);
    void setVertice2(Point _v2);
    void setVertice3(Point _v3);

    double perimetro();
    double area();
    std::string str();
};

#endif
