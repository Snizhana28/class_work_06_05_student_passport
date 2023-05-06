#include "student.h"
#ifndef class_aspirant
#define class_aspirant

class Aspirant : public Student
{
private :
	string name_of_work;
public:
	Aspirant()
	{
		name_of_work = "IT development";
	}
	Aspirant(string name, int age, int numer_of_group, string name_of_work) /*: Student(name, age, numer_of_group)*/
	{
		this->name_of_work = name_of_work;
	}
	void setNameOfWork(string name_of_work)
	{
		this->name_of_work = name_of_work;
	}
	string getNameOfWork()
	{
		return name_of_work;
	}
	void startWork()
	{
		cout << "Graduate student is preparing to write a paper." << endl;
	}
	void endWork()
	{
		cout << "Graduate student finished writing the paper." << endl;
	}
	void Print()
	{
		cout << "-------->Aspirant<--------" << endl;
		cout << "Name: " << getName() << endl;
		cout << "Age: " << getAge() << endl;
		cout << "Number of group: " << getNumberGroup() << endl;
		startWork();
		cout << "Name of work: " << name_of_work << endl;
		endWork();
	}
	~Aspirant(){}
};
#endif