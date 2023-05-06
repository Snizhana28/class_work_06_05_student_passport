#include "passport.h"
#ifndef class_foreign_passport
#define class_foreign_passport

class ForeignPassport : public Passport
{
private:
	bool visa;
	string number_of_foreign_passport;
public:
	ForeignPassport()
	{
		visa = true;
		number_of_foreign_passport = "GC123456";
	}
	ForeignPassport(string name, string surname, string number_of_passport, bool visa, string number_of_foreign_passport)
	{
		this->visa = visa;
		this->number_of_foreign_passport = number_of_foreign_passport;
	}
	void setVisa(bool visa){ this->visa = visa;}
	void setNumberOfForeignPassport(string number_of_foreign_passport){ this->number_of_foreign_passport = number_of_foreign_passport;}
	bool getVisa(){ return visa;}
	string getNumberOfForeignPassport(){ return number_of_foreign_passport;}

	void Print()
	{
		cout << "-------->Foreign Passport<--------" << endl;
		cout << "Name: " << getName() << endl;
		cout << "Surname: " << getSurname() << endl;
		cout << "Number of passport: " << getNumberOfForeignPassport() << endl;
		cout << "Visa: " << visa << endl;
		cout << "Number of foreign passport: " << number_of_foreign_passport << endl << endl;
	}
	~ForeignPassport(){}
};
#endif
