#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
using namespace std;

// creating a university
class University {
        public:
                // this code was given to us on wednesday
                void SetFromCsvLine(string inpl);
                
                string getClassType();

                string getClassNumber();

                string getclassTitle();

                string getProfessor();

        protected:
                string classTitle;
                string professor;
                string classNumber;
                string classType;
};


#endif
