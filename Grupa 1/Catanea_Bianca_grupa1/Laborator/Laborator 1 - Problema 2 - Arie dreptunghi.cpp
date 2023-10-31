#include <iostream>

using namespace std;

int main()
{
  /* 2.	Scrieți un program care cere utilizatorului să introducă o valoare întreagă pentru lungimea unui dreptunghi si
   o variabila pentru latimea acestuia și apoi afișează aria și perimetrul dreptunghiului corespunzător */

   int lungime,latime,perimetru=0,aria=0;
   cout << " Introduceti lungimea dreptunghiului : ";
   cin >> lungime;
   cout << "Introduceti latimea dreptunghiului :";
   cin >> latime;
   perimetru = 2 * ( lungime + latime) ;
   cout << "Perimetrul dreptunghiului este: " << perimetru;
   cout << endl;
   aria= lungime * latime;
   cout << "Aria dreptunghiului este: " << aria;

    return 0;
}
