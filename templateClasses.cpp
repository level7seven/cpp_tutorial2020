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


// template classes 

template <typename T, typename U> 
class Person{
    public:
        T height;
        U weight;
        static int numOfPeople;
        Person(T h, U w){
            height = h;
            weight = w;
            numOfPeople++;
        }
        void GetData(){
            cout << "Height : " << height << endl;
            cout << "Weight : " << weight << endl;
        }
};

// static class members initialization
template <typename T, typename U> int Person<T, U>::numOfPeople;


int main() {


    Person<double, int> mikeTyson(5.83, 216);
    mikeTyson.GetData();
    cout << "Number of people : " << mikeTyson.numOfPeople << endl;



    return 0;
}

