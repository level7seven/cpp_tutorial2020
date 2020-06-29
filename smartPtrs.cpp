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
#include <memory>
#include <stdio.h>


using namespace std; 

// Smart pointers 

int main() {

    int amtToStore;
    cout << "How many numbers do you want to store ? ";
    cin >> amtToStore;
    int * pNums;
    pNums = (int *) malloc(amtToStore * sizeof(int));
    if(pNums != NULL){
        int i = 0;
        while ( i < amtToStore) {
            cout << "Enter a number ";
            cin >> pNums[i];
            i++;
        }
    }
    cout << "You entered this numbers : " << endl;
    for(int i = 0; i < amtToStore; i++) {
        cout << pNums[i] << endl;
    }
    delete pNums;

}