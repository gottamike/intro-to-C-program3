#ifndef CSCI_H
#define CSCI_H
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include "university.h"
using namespace std;


class CSCI: public University{
// reads in a class, and converts it to a CSCI class
        public:
        // formatted printing
        void Print();
};



#endif
