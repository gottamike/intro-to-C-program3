#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include "university.h"
using namespace std;

void University::SetFromCsvLine(string inpl){
	istringstream line (inpl);

       	//get the type
       	getline(line, classType, ' ');

       	//get class number
        getline(line, classNumber, ',');

        //get title of class
       	getline(line, classTitle, ',');

        // get the professor's name
        getline(line, professor, ',');

}
// creating some getters for later use
string University::getClassType(){
	return classType;
}

string University::getClassNumber(){
      	return classNumber;
}

string University::getclassTitle(){
return classTitle;
}

string University::getProfessor(){
return professor;
}


