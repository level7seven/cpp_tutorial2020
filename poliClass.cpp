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

// class

class Customer {
    private: 
        friend class GetCustomerData;
        string name;
    public: 
        Customer(string name) {
        this->name = name;
    }
};


class GetCustomerData{
    public:
        static string GetName(Customer& customer){
            return customer.name;
        }
};


int main() {

    Customer tom("Tom");
    GetCustomerData getName;
    cout << "Customer Name : " << getName.GetName(tom) << endl;

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