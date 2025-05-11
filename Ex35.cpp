#include<iostream>
#include<cmath>

using namespace std;

struct Point{
    double x;
    double y;
    Point(): x(0.0), y(0.0){}
    Point(double _x, double _y){
        x=_x;
        y=_y;
    }
    Point(const Point &other){
        x=other.x;
        y=other.y;
    }
};

class Triangle{
    Point p1, p2, p3;
    public:
    Triangle (const Point &temp1, const Point &temp2, const Point &temp3){
        p1=temp1;
        p2=temp2;
        p3=temp3;
    }
    double getLength(const Point &a, const Point &b) const {
        double sub1 = (b.x - a.x) * (b.x - a.x);
        double sub2 = (b.y - a.y) * (b.y - a.y);
        return sqrt(sub1 + sub2);
    }
    double getPerimeter() const{
        double len1=getLength(p2, p3);
        double len2=getLength(p1, p3);
        double len3=getLength(p1, p2);
        return len1+len2+len3;
    }
    double getArea() const{
        double a=getLength(p2, p3);
        double b=getLength(p1, p3);
        double c=getLength(p1, p2);
        double p=(a+b+c)/2.0;
        return sqrt(p*(p-a)*(p-b)*(p-c));
    }
};

int main(){
    Point A(1,1), B(1, 4), C(5, 1);
    Triangle tri(A, B, C);
    cout << tri.getArea() << endl; 
}