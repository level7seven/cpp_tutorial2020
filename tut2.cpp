#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
#include <limits>

using namespace std;

int main() {

    // store the age in string variable
    string sAge = "0";
    // intialize grade variable
    int nGrade = 0;
    // please provide your age string sent to the console
    cout << "Please enter the age : ";
    // get the input and store it in sAge variable
    cin >> sAge;
    // convert string into int
    int nAge = stoi(sAge);
    // conditionals
    
    if (nAge < 5)
    cout << "Stay at home\n";
    else if (nAge == 5)
    cout << "Go to kindergarten\n";
    else if ((nAge > 5) && (nAge <= 17)) {
        nGrade = nAge - 5;
        cout << "Grade: \n" << nGrade;
    } else {
        cout << "Go to college.";
    }

    return 0;



}