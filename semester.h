#ifndef SEMESTER_H
#define SEMESTER_H
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include "university.h"
#include "csci.h"
#include "bio.h"
#include "egen.h"
using namespace std;

class Semester{
        private:
                vector<CSCI> cVector;
                vector<EGEN> eVector;
                vector<BIOB> bVector;
        public:
                // these three classes allow me to push csci, biob, and egen objects into their vectors
                void push_CSCI(CSCI object);
                void push_EGEN(EGEN object);
                void push_BIOB(BIOB object);
               
	       	// this print is for when the user wants all csci classes printed out
                void print_CSCI();
               
	       	// this print is for when the user wants only a certain csci class printed out
                void print_CsClass(string userInput);
               
	       	// this class is for when the user wants only a certain bio class printed out
		void print_bioClass(string userInput);
		
		// this class is for when the user wants only a certain egen class printed out               
		void print_egenClass(string userInput);
                
		// this class prints out all bio classes
                void print_BIOB();

                // this class prints out all egen classes
                void print_EGEN();
};


#endif
