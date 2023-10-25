#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   char nume[51], prenume[51], judet[51];
   cout<<"Numele tau este: ";
   cin.getline (nume,51);
   cout << "Prenumele tau: ";
   cin.getline (prenume, 51);
   cout << "Judetul din care vi: ";
   cin.getline (judet, 51);
   cout << "Salut, "<<nume<<" "<<prenume<<" din "<<judet<<endl;
   cout << "Lungimea numelui + prenume: "<<strlen(nume)+strlen(prenume)<<endl;


   return 0;
}
