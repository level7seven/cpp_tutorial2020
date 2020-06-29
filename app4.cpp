#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
#include <limits>

using namespace std;

int main() {

    vector<int> vecRandNums(2);
    vecRandNums[0] = 10;
    vecRandNums[1] = 20;
    vecRandNums.push_back(30);
    cout << "Last index: " << vecRandNums[vecRandNums.size() - 1] << endl;

    string sSentence = "This is a random string";
    vector<string> vecsWords;

    stringstream ss(sSentence);

    string sIndivStr;
    char cSpace = ' ';

    while(getline(ss, sIndivStr, cSpace)){
        vecsWords.push_back(sIndivStr);

    }

    for(int i = 0; i < vecsWords.size(); i++){
        cout << vecsWords[i] << "\n";
    }

}