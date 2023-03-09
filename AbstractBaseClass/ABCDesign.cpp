class Ellipse{
    private:
        double x; // x-coordinate of the ellipse's center
        double y; // y-coordinate of the ellipse's center
        double a; // semimajor axis
        double b; // semiminor axis
        double angle; // orientation angle in degrees
    public:
        Ellipse(double X, double Y, double A, double B, double Angle):
        x(X), y(Y), a(A), b(B), angle(Angle){}
        void Move(double nx, double ny){x = nx; y = ny;} //nx, ny = new x, new y
        virtual double Area() {return 3.14159 * a * b;}
        virtual void Rotate(double dang) {angle += dang;}
        virtual void Scale(double sa, double sb) {a *= sa; b *= sb;}
};

class Circle: public Ellipse{
    private:
        // all needed attributes in Ellipse
    public:
        // see a as radius
        Circle(double X, double Y, double R): Ellipse(X, Y, R, 0, 0){}
        virtual double Area() {return 3.14159 * a * a;}
        virtual void Scale(double sa) {a *= sa;}
};

class Circle{
    private:
        double x; // x-coordinate of the circle's center
        double y; // y-coordinate of the circle's center
        double r; // radius of circle
    public:
        Circle(double X, double Y, double R): x(X), y(Y), r(R){}
        void Move(int nx, int ny){x = nx; y = ny;}
        virtual double Area() {return 3.14159 * r * r;}
        virtual void Scale(double sr) {r *= sr;}
};

class Ellipse: public Circle{
    private:
        double a;
        double b;
        double angle;
    public:
        Ellipse(double X, double Y, double A, double B, double Angle):
        Circle(X, Y, 0), a(A), b(B), angle(Angle){}
        void Rotate(double dang) {angle += dang;}
        virtual void Scale(double sa, double sb) {a *= sa; b *= sb;}
};

class BaseEllipse{
    private:
        double x;
        double y;
    public:
        BaseEllipse(double X, double Y): x(X), y(Y){}
        void Move(int nx, int ny) {x = nx; y = ny;}
        virtual double Area() const = 0;
        virtual void Scale() = 0;
};
class Ellipse: public BaseEllipse{
    private:
        double a;
        double b;
        double angle;
    public:
        Ellipse(double X, double Y, double A, double B, double Angle):
        BaseEllipse(X, Y), a(A), b(B), angle(Angle){}
        void Rotate(double dang) {angle += dang;}
        virtual double Area() {return 3.14159 * a * b;}
        virtual void Scale() {a *= sa; b *= sb;}
};
class Circle: public BaseEllipse{
    private:
        double r;
    public:
        Circle(double X, double Y, double R): BaseEllipse(X, Y), r(R){}
        virtual double Area() {return 3.14159 * r * r;}
        virtual void Scale() {r *= sr;}
};
