#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include "university.h"
#include "egen.h"
using namespace std;


void EGEN::Print(){
	cout << classType << "-" << professor << "-" << classTitle << "-" << classNumber << endl;
}
