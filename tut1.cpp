#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
#include <limits>

using namespace std;

int main() {

    string sAge = "0";
    int nGrade = 0;

    cout << "Enter Age : ";
    cin >> sAge;
    int nAge = stoi(sAge);

    if (nAge < 5) 
        cout << "Stay home";
    else if (nAge == 5)
        cout << "Go to kindergarten";
    else if ((nAge > 5) && (nAge <= 17)) {
        nGrade = nAge - 5;
        cout << "Go to grade : " << nGrade; "\n";
    }
     else {
        cout << "Go to college";
     }
    return 0;
}
