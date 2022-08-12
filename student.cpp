#include "student.h"
#include <iostream>
using std::cout;
using std::endl;

// [D.2d] Constructor
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {

	pStudentID = studentID;
	pFirstName = firstName;
	pLastName = lastName;
	pEmailAddress = emailAddress;
	pAge = age;
	pNumDays1 = daysInCourse1;
	pNumDays2 = daysInCourse2;
	pNumDays3 = daysInCourse3;
	pDegreeProgram = degreeProgram;
}

// [D.2a] Getters i.e. Accessors
string Student::getStudentID() { return pStudentID; }
string Student::getFirstName() { return pFirstName; }
string Student::getLastName() { return pLastName; }
string Student::getEmail() { return pEmailAddress; }
int Student::getAge() { return pAge; }
int Student::getNumDays1() { return pNumDays1; }
int Student::getNumDays2() { return pNumDays2; }
int Student::getNumDays3() { return pNumDays3; }
DegreeProgram Student::getDegree() { return pDegreeProgram; }

// [D.2b] Setters i.e. Mutators
void Student::setStudentID(string studentID) { pStudentID = studentID; }
void Student::setFirstName(string firstName) { pFirstName = firstName; }
void Student::setLastName(string lastName) { pLastName = lastName; }
void Student::setEmail(string emailAddress) { pEmailAddress = emailAddress; }
void Student::setAge(int age) { pAge = age; }
void Student::setNumDays1(int daysInCourse1) { pNumDays1 = daysInCourse1; }
void Student::setNumDays2(int daysInCourse2) { pNumDays2 = daysInCourse2; }
void Student::setNumDays3(int daysInCourse3) { pNumDays3 = daysInCourse3; }
void Student::setDegree(DegreeProgram degreeProgram) { pDegreeProgram = degreeProgram; }

// [D.2e] Print() defined
void Student::print() {

	cout << pStudentID;
	cout << "\tFirst Name: " << pFirstName;
	cout << "\tLast Name: " << pLastName;
	cout << "\tAge: " << pAge;
	cout << "\tdaysInCourse: {" << pNumDays1 << ", " << pNumDays2 << ", " << pNumDays3 << "}";
	cout << "\tDegree Program: ";

	switch (pDegreeProgram)
	{
	case SECURITY:
		cout << "SECURITY";
		break;
	case NETWORK:
		cout << "NETWORK";
		break;
	case SOFTWARE:
		cout << "SOFTWARE";
		break;
	default:
		cout << "UNKNOWN";
		break;
	}
	cout << endl;
}