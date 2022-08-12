#include <iostream>
#include "degree.h"
using std::string;

// [D.1]
class Student {

private:
	string pStudentID;
	string pFirstName;
	string pLastName;
	string pEmailAddress;
	int pAge;
	int pNumDays1;
	int pNumDays2;
	int pNumDays3;
	DegreeProgram pDegreeProgram;

public:

	// [D.2d] Constructor
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

	// [D.2a] Getters i.e. Accessors
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	int getNumDays1();
	int getNumDays2();
	int getNumDays3();
	DegreeProgram getDegree();

	// [D.2b] Setters i.e. Mutators
	void setStudentID(string studenId);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string emailAddress);
	void setAge(int age);
	void setNumDays1(int daysInCourse1);
	void setNumDays2(int daysInCourse2);
	void setNumDays3(int daysInCourse3);
	void setDegree(DegreeProgram degreeProgram);

	// [D.2e] Declaring Print()
	void print();
};