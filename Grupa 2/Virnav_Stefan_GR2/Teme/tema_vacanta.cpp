/*In programul acesta am incercat sa implementez mai multe cunostinte pe care le-am invatat pe parcursul vacantei precum clase,vectori si stringuri
Plus am decis sa renunt la namespace std deoarece asa am vazut ca e industry standard*/


#include <iostream>
#include <vector>
#include <string>
/* Sa se defineasca elev: nume, prenume, cnp, adresa, note. Sa se defineasca struct note nota 1, nota 2, nota 3,
medie. Sa se afiseze in fisier toti elevii cu medie mai mare decat 6.*/
class Student
{
private:
	long  long cnp;
	std::string adresa;
	double note[3];
public:
	std::string prenume;
	std::string nume;
	double medie;
	//Constructor
	Student(std::string fnume, std::string lnume, long long c, std::string a, double n[]) : nume(fnume), prenume(lnume),
		cnp(c), adresa(a)
	{
		for (int i = 0; i < 3; i++)
			note[i] = n[i];
		medie =(note[0] + note[1] + note[2]) / 3;
	}
 };
int main()
{	
	// Adding students
	std::vector<Student> elevi;
	double noteMaria[] = { 6.0, 5.0, 8.0 };//Am folosit array-ul asta la toate ca exemplu
	elevi.push_back(Student( "Maria", "Toader", 1234567890123, "123 Main St", noteMaria ));
	elevi.push_back(Student("Jane", "Smith", 9876543210987, "456 Elm St", noteMaria ));
	elevi.push_back(Student("Alice", "Johnson", 5555555555555, "789 Oak St", noteMaria));
	for (Student elev : elevi)
	{
		if (elev.medie > 6.0)
			std::cout << elev.nume << " " << elev.prenume<<" " << elev.medie<<std::endl;
	}
	return 0;
}
