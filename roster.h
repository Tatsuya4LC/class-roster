#include "student.h"


class Roster {

public:

	int entry = 0;

	// [E.1]
	Student* classRosterArray[5];

	// [F.5] Destructor
	~Roster();

	// [E.2b][E.3a] Adding new student to classRosterArray
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

	// [E.3b] Remove student with given studentID
	void remove(string studentID);

	// [E.3c] Print all students in the classRosterArray
	void printAll();

	// [E.3d] Prints the average number of days in the 3 courses by the given studentID
	void printAverageDaysInCourse(string studentID);

	// [E.3e] Prints invalid e-mail addresses
	void printInvalidEmails();

	// [E.3f] Prints specific students with their information specified by their degree program
	void printByDegreeProgram(DegreeProgram degreeProgram);
};