#include <iostream>
using namespace std;
#ifndef class_student
#define class_student

class Student
{
private:
	string name;
	int age;
	int numer_of_group;
public:
	Student()
	{
		name = "Snizhana";
		age = 17;
		numer_of_group = 3;
	}
	Student(string name, int age, int numer_of_group)
	{
		this->name = name;
		this->age = age;
		this->numer_of_group = numer_of_group;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	void setNumberGroup(int numer_of_group)
	{
		this->numer_of_group = numer_of_group;
	}
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
	int getNumberGroup()
	{
		return numer_of_group;
	}
	void Print()
	{
		cout << "-------->Student<--------" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Number of group: " << numer_of_group << endl << endl;
	}
	~Student(){}
};
#endif