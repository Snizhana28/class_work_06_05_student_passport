#include "aspirant.h"
#include "foreign_passport.h"

int main()
{
	Student* student = new Student();
	student->Print();
	Aspirant* aspirant = new Aspirant();
	aspirant->Print();
	delete student;
	delete aspirant;

	//Passport* passport = new Passport();
	//passport->Print();
	//ForeignPassport* foreignPassport = new ForeignPassport();
	//foreignPassport->Print();
	return 0;
}