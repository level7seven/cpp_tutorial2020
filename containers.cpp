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
#include <deque>
#include <iterator>

using namespace std; 

// Containers

int main() {

    deque<int> nums = {1,2,3};
    nums.push_front(0);
    nums.push_back(5);
    for (int x: nums) {
        cout << x << endl;
    }

}