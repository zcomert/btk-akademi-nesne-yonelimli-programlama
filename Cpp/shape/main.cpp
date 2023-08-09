#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Shape
{
protected:
    int x;
    int y;

public:
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }

    void setX(int value)
    {
        x = value;
    }

    void setY(int value)
    {
        y = value;
    }

    Shape(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    virtual void draw() = 0;
};

class Triangle : public Shape
{
public:
    Triangle(int x, int y)
        : Shape(x, y)
    {
    }
    void draw() override
    {
        cout << "The triange has been drawn." << endl;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int x, int y)
        : Shape(x,y)
    {

    }

    void draw() override
    {
        cout << "The rectangle (?) has been drawn." << endl;
    }
};

class Square : public Rectangle
{
public:
    Square(int x) : Rectangle(x,x)
    {

    }
    void draw() override
    {
        cout << "The square (?) has been drawn." << endl;
    }
};

int main()
{
    Triangle item1 = Triangle(3, 5);
    Rectangle item2 = Rectangle(6, 8);
    Square item3 = Square(5);
    
    item1.draw();
    item2.draw();
    item3.draw();
    
    char c = getchar();
    return 0;
}