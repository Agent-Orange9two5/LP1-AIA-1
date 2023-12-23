#include <iostream>
using namespace std;
int main()
{
  /* 2.	Scrieți un program care cere utilizatorului să introducă o valoare întreagă pentru lungimea unui dreptunghi si
   o variabila pentru latimea acestuia și apoi afișează aria și perimetrul dreptunghiului corespunzător */

   int latime,lungime,aria=0,perimetru=0;
   cout<<"Introduceti lungimea dreptunghiului: ";
   cin>>lungime;
   cout<<"Introduceti latimea dreptunghiului: ";
   cin>>latime;
   perimetru=( lungime + latime)*2;
   cout<<"Perimetrul dreptunghiului: "<<perimetru;
   cout<<endl;
   aria=latime*lungime;
   cout << "Aria dreptunghiului este: " << aria;

    return 0;
}
