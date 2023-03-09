// virtual members
#include <iostream>
using namespace std;

        // int area(){return 0;}  // Try it without virtual
class Polygon {
    protected:
        int width, height;
    public:
        void set_values (int a, int b){width=a; height=b;}
        // virtual int area(){return -1;}

};

class Rectangle: public Polygon {
    public:
        int area(){return (width * height);}
};

class Triangle: public Polygon {
    public:
        int area(){return (width * height / 2);}
};

int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon poly;
    Polygon * ppoly1 = &rect;
    Polygon * ppoly2 = &trgl;
    Polygon * ppoly3 = &poly;
    ppoly1->set_values (4,5);
    ppoly2->set_values (4,5);
    ppoly3->set_values (4,5);
    cout << ppoly1->area() << endl;
    cout << ppoly2->area() << endl;
    cout << ppoly3->area() << endl;
    return 0;
}