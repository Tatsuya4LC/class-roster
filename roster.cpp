#include "roster.h"
#include <sstream>
using std::cout;
using std::endl;

// [E.2b][E.3a] Leveraging entry that was initialized in roster.h to use an index for add new student to the classRosterArray
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {

    classRosterArray[entry] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
    entry++;
}

// [E.3b] Using a pointer with the getter to match the studentID to be removed
void Roster::remove(string studentID) {

    bool found = false;
    for (int i = 0; i < entry; i++) {

        if (classRosterArray[i]->getStudentID() == studentID) {

            for (int j = i; j < entry; j++) {

                // replacing the empty index with the next data to free up the last place for new data
                classRosterArray[j] = classRosterArray[j + 1];
                found = true;
            }
            --entry;

        }
    }

    // When prompted with mismatched data 
    if (found == false) {
        cout << endl << "Student with ID of " << studentID << " was not found in the Class Roster." << endl;
    }
}

// [E.3c] defined to print all student currently on the classRosterArray
void Roster::printAll() {

    for (int i = 0; i < entry; i++) {

        classRosterArray[i]->print();
    }
}

// [E.3d] Calculates the average Days student spent in the course
void Roster::printAverageDaysInCourse(string studentID) {

    for (int i = 0; i < entry; i++) {

        if (classRosterArray[i]->getStudentID() == studentID) {

            cout << (classRosterArray[i]->getNumDays1() + classRosterArray[i]->getNumDays2() + classRosterArray[i]->getNumDays3()) / 3 << endl;
        }
    }
}

// [E.3e] Checks for Invalid E-mail Addresses
void Roster::printInvalidEmails() {

    cout << endl;
    for (int i = 0; i < entry; i++) {

        string studentEmail = (classRosterArray[i]->getEmail());
        if (studentEmail.find(' ') != string::npos) {

            cout << studentEmail << endl;
        }
        else if (studentEmail.find('@') != string::npos && studentEmail.find('.') != string::npos) {

            break;
        }
        else {

            cout << studentEmail << endl;
        }
    }
    cout << endl;
}

// [E.3f] Prints student's information sorted by DegreeProgram
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

    cout << endl;
    for (int i = 0; i < entry; i++) {
        if (degreeProgram == classRosterArray[i]->getDegree()) {
            classRosterArray[i]->print();
        }
    }
    cout << endl;
}

// [F.5] Destructor to clear memory used
Roster::~Roster() {

    for (int i = 0; i <= entry; i++) {

        delete classRosterArray[i];
        classRosterArray[i] = nullptr;
    }
}