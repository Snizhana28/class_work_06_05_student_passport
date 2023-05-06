#include <iostream>
using namespace std;

#ifndef class_passport
#define class_passport

class Passport
{
private:
	string name;
	string surname;
	string patronymic;
	string nationality;
	string date_of_birthay;
public:
	Passport()
	{
		name = "Snizhana";
		surname = "Kostyuk";
		patronymic = "Serhiyivna";
		nationality = "Ukrainian";
		date_of_birthay = "28.12.2005";
	}
	Passport(string name, string surname, string patronymic, string nationality, string date_of_birthay)
	{
		this->name = name;
		this->surname = surname;
		this->patronymic = patronymic;
		this->nationality = nationality;
		this->date_of_birthay = date_of_birthay;
	}
	void setName(string name){ this->name = name;}
	void setSurname(string surname){ this->surname = surname;}
	void setPatronymic(string patronymic){ this->patronymic = patronymic;}
	void setNationality(string nationality){ this->nationality = nationality;}
	void setDateOfBirthay(string date_of_birthay){ this->date_of_birthay = date_of_birthay;}
	string getName(){ return name;}
	string getSurname(){ return surname;}
	string getPatronymic() { return patronymic; }
	string getNationality(){ return nationality;}
	string getDateOfBirthay(){ return date_of_birthay;}
	void Print()
	{
		cout << "-------->Passport<--------" << endl;
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Patronymic: " << patronymic << endl;
		cout << "Nationality: " << nationality << endl;
		cout << "Date of birthay: " << date_of_birthay << endl << endl;
	}
	~Passport(){} 
};

#endif 
