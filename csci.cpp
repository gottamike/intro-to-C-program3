#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include "university.h"
#include "csci.h"
using namespace std;

void CSCI::Print(){
	cout << classNumber << "-" << classTitle << "-" << classType << "-" << professor << endl;
}

