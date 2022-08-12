#include <iostream>
#include <vector>
#include <sstream>
#include "roster.h"

using namespace std;

int main() {

    // # of entries based on the given list
    const int currentStudents = 5;

    // [A] The list modified with Student's information
    const string studentData[] =

    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Tristan,Lozano,tlozan7@wgu.edu,30,10,20,30,SOFTWARE"
    };

    // [F.1]
    cout << endl << "Scripting and Programming - Applications - C867" << endl;
    cout << "C++" << endl;
    cout << "001344245" << endl;
    cout << "Tristan Lozano" << endl << endl;

    // [F.2]
    Roster* classRoster = new Roster;

    // [E.2a] Parsing data to elements that will go to classRosterArray
    for (int i = 0; i < currentStudents; i++) {

        //vector declare variable holder of parsed string
        vector <string> token;

        //stringstream class to read the input
        stringstream check(studentData[i]);

        //position of the delimiter in the string
        string part;

        //actual parsing between with comma as delimiter
        while (getline(check, part, ','))
        {
            token.push_back(part);
        }

        //Conversion of string to DegreeProgram
        DegreeProgram deg;
        if (token[8] == "SECURITY") {
            deg = SECURITY;
        }
        else if (token[8] == "NETWORK") {
            deg = NETWORK;
        }
        else if (token[8] == "SOFTWARE") {
            deg = SOFTWARE;
        }
        else {
            deg = UNKNOWN;
        }

        // [F.3] Adding each student to the classRoster
        classRoster->add(token[0], token[1], token[2], token[3], stoi(token[4]), stoi(token[5]), stoi(token[6]), stoi(token[7]), deg);
    }

    // [F.4]
    classRoster->printAll();
    classRoster->printInvalidEmails();

    // Pseudo input StudentID
    for (int i = 0; i < currentStudents; i++) {
        classRoster->printAverageDaysInCourse(classRoster->classRosterArray[i]->getStudentID());
    }
    classRoster->printByDegreeProgram(SOFTWARE);
    classRoster->remove("A3");
    classRoster->printAll();
    classRoster->remove("A3");
}