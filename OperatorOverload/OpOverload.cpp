// vectors: overloading operators example
#include <iostream>
using namespace std;

class Vector {
    private:
        int x,y;
    public:
        Vector(): x(0), y(0){};
        Vector(int X,int Y): x(X), y(Y){}
        void print(){cout << x << "," << y << endl;}
        Vector operator+(Vector param){
            Vector temp; // (0,0)
            temp.x = x + param.x;
            temp.y = y + param.y;
            return (temp);
        }
};

int main(){
    Vector a (5,2);
    Vector b (3,1);
    Vector c;
    c = a + b;
    c.print();
    return 0;
}