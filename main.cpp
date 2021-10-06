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

int main(int argc, char *argv[]){
	
	int userInput;
		do {
	Semester sem;
	string line;

	ifstream ifs {argv[1]};
	// while loop that determines where to push each line of the file
	while (getline(ifs, line)) {
		istringstream l (line);
		string classType;
		getline(l, classType, ' ');
		if (classType == "CSCI"){
			CSCI cs;
			// set from csv and push to csci 
			cs.SetFromCsvLine(line);
			sem.push_CSCI(cs);
		}

		if (classType == "BIOB"){
			BIOB bio; 
			//set from csv and push to bio
			bio.SetFromCsvLine(line);
			sem.push_BIOB(bio);
		}
				
		if (classType == "EGEN"){
			EGEN eg;
			// set from csv and push to egen
			eg.SetFromCsvLine(line);
			sem.push_EGEN(eg);
		}

	}
	
	cout << "Choices: " << endl;
	cout << "1 - print class given number" << endl;
	cout << "2 - print all classes for a given type" << endl;
	cout << "3 - quit" << endl;

	cin >> userInput;

	if(userInput == 1){
		// creating two strings so the user can enter CSCI and 112 for example
		string userChoice;
		string userChoice2;
		cout << "Enter a class type and class number (ex: CSCI 112): " << endl;
		cin >> userChoice;
		cin >> userChoice2;
		if (userChoice == "CSCI"){
			// depending on what the users first input was, I concatenate both strings and send it to the respective print function
			sem.print_CsClass(userChoice + " " + userChoice2);
		}
		if (userChoice == "EGEN"){
			sem.print_egenClass(userChoice + " " + userChoice2);
		}
		if (userChoice == "BIOB"){
			sem.print_bioClass(userChoice + " " + userChoice2);
		}
	}
	
	if(userInput == 2){
		// creating user input
		string userChoice;
                cout << "Enter class type (CSCI, BIOB, or EGEN)" << endl;
                cin >> userChoice;
		// I use string compare here to see what the user inputed, and then I call the print functions from there
			if(strncmp (userChoice.c_str(), "CSCI", 4) == 0){
				sem.print_CSCI();
				}
                	if(strncmp (userChoice.c_str(), "BIOB", 4) == 0){
				sem.print_BIOB();
			}
			if(strncmp (userChoice.c_str(), "EGEN", 4) == 0){
				sem.print_EGEN();
			}
	
		}
	// terminates program
	if (userInput == 3){
		return 0;
	}
	
		}
        while (userInput != 3);	
	
	return 0;

}


