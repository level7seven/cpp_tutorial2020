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


class Shape {
    protected:
        double height;
        double width;
    public: 
    // constructors 
        Shape(double length){
            height = length;
            width = length;
        }
        Shape(double h, double w) {
            height = h;
            width = w;
        }
    virtual double Area() {
        return height * width;
    }

};

// inheritance

class Circle : public Shape {
    public:
        Circle(double w) : 
        Shape(w){

        }
    double Area(){
        return 3.14159 * pow((width / 2), 2);
    }
};

// receives shapes 
void ShowArea(Shape& shape) {
    cout << "Area : " << shape.Area() << endl;
}




int main() {


    Shape square(10,5);
    Circle circle(10);
    ShowArea(square);
    ShowArea(circle);

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