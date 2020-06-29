#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;


// Function prototypes
vector<int> Range(int start, int max, int step);


class Shape{
    public:
        virtual double Area() = 0;
    };

class Circle :  public Shape {
    protected:
        double width;
    public:
        Circle(double w){
            width = w;
        }
    double Area() override{
        return 3.14159 * pow((width /2), 2);
    }
};

class Rectangle : public Shape{
    protected:
        double width, height;
    public : 
        Rectangle(double w, double h) {
            width = w;
            height = h;
        }
    double Area() override{
        return height * width;
    }
};

class Square : public Rectangle {
    public:
        Square(double w, double h) : 
        Rectangle(w,h) {

        }
        double Area() override {
            return height * 2;
        }
};


void ShowArea(Shape& shape){
    cout << "Area: " << shape.Area() << endl;
};

int main() {

    Rectangle rectangle(10, 5);
    Circle circle(10)

    ShowArea(circle);
    ShowArea(rectangle);
    

    return 0;

}


// Functions
vector<int> Range(int start, int max, int step) {
    int i = start;

    vector<int> range;

    while (i < max) {

        range.push_back(i);

        return range;

    }
}