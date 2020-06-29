#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
#include <limits>

using namespace std;

int main() {

    int arrnNums[10] = {1};

    int arrnNums2[3] = {1, 2, 3};

    int arrnNums3[5] = {8,9};

    cout << "1st Value of the arrnNums: "  << arrnNums[0] << "\n";
    cout << "1st Value of the arrnNums2: " << arrnNums3[0] << "\n";
        arrnNums3[0] = 3;
    cout << "1st Value of the arrnNums3: " << arrnNums3[0] << "\n";
    
    int pointerSize = sizeof(arrnNums) / sizeof(*arrnNums);
    
    int size = sizeof(arrnNums) / sizeof(int);
    int size2 = sizeof(arrnNums2) / sizeof(int);
    int size3 = sizeof(arrnNums3) / sizeof(int);
    cout << "1st Array size : " << size << "\n";
    cout << "2nd Array size : " << size2 << "\n";
    cout << "3rd Array size : " << size3 << "\n";
    cout << "1st Array size : " << pointerSize << "\n";

    int arrnNums4[2][2][2] = {{{1,2},{3,4}},
    {{5,6},{7,8}}};

    cout << arrnNums4[1][1][1];
    return 0;

}