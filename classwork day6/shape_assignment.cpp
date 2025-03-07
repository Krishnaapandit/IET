#include<iostream>
using namespace std;

class shape
{
public:
    virtual void display() = 0;
    virtual int calArea() = 0;
};

class Square : public shape
{
    int side;
public:
    Square(int s)
	{
        side = s;
    }
    void display()
	{
        cout << "Side of square is: " << side << endl;
    }
    int calArea()
	{
        return side * side ;
    }
};

class Rectangle : public shape
{
    int length, breadth;

public:
    Rectangle(int l, int b)
	{
        length = l;
        breadth = b;
    }
    void display()
	{
        cout << "Length of rectangle: " << length << endl;
        cout << "Breadth of rectangle: " << breadth << endl;
    }
    int calArea()
	{
        return length * breadth;
    }
};

int main() {
    shape* ptr = new Rectangle(4, 2);

    cout << "Area of Rectangle is: " << ptr->calArea() << endl;
    ptr->display();

    ptr = new Square(2);

    cout << "Area of Square is: " << ptr->calArea() << endl;
    ptr->display();

    delete ptr;
}
