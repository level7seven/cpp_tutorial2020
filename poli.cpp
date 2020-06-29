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

// structure

struct Shape {
    double length, width;
    Shape(double l = 1, double w = 1){
        length = l;
        width = w;
    }
    double Area(){
        return length * width;
    }
    private: 
        int id;
};

struct Circle : Shape{
    Circle(double width){
        this->width = width;
    }
    double Area(){ 
        return 3.14159 * pow((width / 2), 2);
    }
};

int main() {


    Shape shape(10, 10);
    cout << "Square area : " << shape.Area() << endl;
    Circle circle(10);
    cout << "Circle area : " << circle.Area() << endl;
    // aggreggate
    Shape rectangle{10,15};
    cout << "Rectangle area : " << rectangle.Area() << endl;

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