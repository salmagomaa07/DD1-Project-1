#ifndef INPUTFUNCTION_H
#define INPUTFUNCTION_H

#include <string>
#include <vector>
using namespace std;

struct BooleanFunction {
    int numVars = 0;
    vector<int> minterms; //taking everything as minterms including the maxterms 
    vector<int> dontCares;
};

bool readFunctionFromFile(string fileName, BooleanFunction& func); // reads and returns t/f depending on whether there is an error or not
string toBinary(int number, int numVars); //converts number to binary with "numVars" bits

#endif
