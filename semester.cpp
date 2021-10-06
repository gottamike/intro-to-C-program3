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
#include "semester.h"
using namespace std;


 // these three classes allow me to push csci, biob, and egen objects into their vectors
void Semester::push_CSCI(CSCI object){
	cVector.push_back(object);
}

void Semester::push_EGEN(EGEN object){
        eVector.push_back(object);
}

void Semester::push_BIOB(BIOB object){
         bVector.push_back(object);
}

  // this print is for when the user wants all csci classes printed out
void Semester::print_CSCI(){
        for (unsigned int i = 0; i < cVector.size(); i++){
                 cVector[i].Print();
          	}
}

  // this print is for when the user wants only a certain csci class printed out
void Semester::print_CsClass(string userInput){
	for (unsigned int i = 0; i < cVector.size(); i++){
        	if (userInput == cVector[i].getClassType() + " " + cVector[i].getClassNumber()){
                	cVector[i].Print();
                        }

             	}

}

// this class is for when the user wants only a certain bio class printed out
void Semester::print_bioClass(string userInput){
	for (unsigned int i = 0; i < bVector.size(); i++){
        	if (userInput == bVector[i].getClassType() + " " + bVector[i].getClassNumber()){
                	bVector[i].Print();
                     	}

        	}
}

// this class is for when the user wants only a certain egen class printed out
void Semester::print_egenClass(string userInput){
	for (unsigned int i = 0; i < eVector.size(); i++){
		if (userInput == eVector[i].getClassType() + " " + eVector[i].getClassNumber()){
                	eVector[i].Print();
                     	}

         	}
}

// this class prints out all bio classes
void Semester::print_BIOB(){
	for (unsigned int i = 0; i < bVector.size(); i++){
        	bVector[i].Print();
             	}
}
       
// this class prints out all egen classes
void Semester::print_EGEN(){
  	for (unsigned int i = 0; i < eVector.size(); i++){
        	eVector[i].Print();
            	}
}


