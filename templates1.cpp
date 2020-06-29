#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>
#include <limits>
#include <sstream>


using namespace std;


// Function prototypes
vector<int> Range(int start, int max, int step);

// Functions

#define PI 3.14159
#define AREA_CIRCLE(radius) (PI * pow(radius, 2))

// Templates for
// 1
// template <typename T>
// void Times2(T val) {
//     cout << val << " * 2 = " << val * 2 << endl;
// }

//2

// template<typename T> 
// T Add(T val, T val2) {
//     return val + val2;
// }

template <typename T>
T Max(T val1, T val2){
    return (val1 < val2) ? val2 : val1;
}

int main() {

    // cout << "Circle area : " << AREA_CIRCLE(5) << endl;

    // Times2(5);
    // Times2(6);

    // cout << " Sum of 3 + 4 = " << Add(3, 4) << endl;

    cout << " Max 4 or 8 = " << Max(4, 8) << endl;
    cout << " Max A or B = " << Max('A', 'B') << endl;
    cout << " Max Dog or Cat = " << Max("Dog", "Cat") << endl;


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